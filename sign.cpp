#include <iostream>
#include <vector>
using namespace std;

vector<int> arrangeBysign(vector<int> &nums)
{
    vector<int> a1, a2, a3;
    int n = nums.size();

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            a1.push_back(nums[i]);
        else
            a2.push_back(nums[i]);
    }

    int p = 0, q = 0;

    // Rearrange alternatively
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            a3.push_back(a2[p]);
            p++;
        }
        else
        {
            a3.push_back(a1[q]);
            q++;
        }
    }

    return a3;
}

int main()
{
    vector<int> nums = {2, -1, 4, -3, 5, -4};

    vector<int> ans = arrangeBysign(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}