#include <iostream>
#include <vector>
using namespace std;
void rotateArrayByOne(vector<int> &nums)
{
    int fakeInt = nums[0];
    int n = nums.size();
    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[n - 1] = fakeInt;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int moveZeroes(vector<int> &a)
{
    int i = 0, temp;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            break;
        }
    }
    int j = i;
    while (j < a.size())
    {
        if (a[j] != 0)
        {
            swap(a[i], a[j]);
            i++;
        }

        j++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums3;
    int i = 0, j = 0, x;
    while (i != nums1.size() && j != nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            x = nums1[i];
            nums3.push_back(x);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            x = nums1[i];
            nums3.push_back(x);
            i++;
        }
        else if (nums2[j] < nums1[i])
        {
            x = nums2[j];
            nums3.push_back(x);
            j++;
        }
    }
    int y;
    while (j != nums2.size())
    {
        y = nums2[j];
        nums3.push_back(y);
        j++;
    }
    int k;
    while (i != nums1.size())
    {
        k = nums1[i];
        nums3.push_back(k);
        i++;
    }
    for (int i = 0; i < nums3.size(); i++)
    {
        cout << nums3[i] << " ";
    }

    return nums3;
}
vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0, x;
    vector<int> nums3;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            x = nums1[i];
            if (nums3.empty() || nums3.back() != x)
            {
                nums3.push_back(x);
            }
             i++;
        j++;
        }else if (nums1[i]<nums2[j])
        {
            i++;
        }else if (nums1[i]>nums2[j])
        {
            j++;
        }
        
       

    }}
    for (int i = 0; i < nums3.size(); i++)
    {
        cout << nums3[i] << " ";
    }
    return nums3;
}

int main()
{
    vector<int> nums1, nums2;

    // nums1 = {1, 1, 2, 3};
    // nums2 = {1, 2, 2, 4};
    nums1 = {1, 2, 3, 4, 5};
nums2 = {2, 4, 5};
    intersectionArray(nums1, nums2);
    return 0;
}