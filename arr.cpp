#include <iostream>
#include <vector>
using namespace std;
void rotateKthterm(vector<int> &nums, int k)
{
    int n = nums.size(), temp;
    k = k % n;
    int i = 0, j = n - 1;
    while (i < j)
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    int m = 0, t = k, temp1;
    while (m < t)
    {
        temp1 = nums[m];
        nums[m] = nums[t];
        nums[t] = temp1;
        m++;
        t--;
    }
    int l = k + 1, h = n - 1, temp2;
    while (l < h)
    {
        temp2 = nums[l];
        nums[l] = nums[h];
        nums[h] = temp2;
        l++;
        h--;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    vector<int> nums = {2, 3, 5, 6, 7, 9, 12};
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    rotateKthterm(nums, 3);

    return 0;
}
