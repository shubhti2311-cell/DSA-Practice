#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)//for sorted array
{
    int l = 0, h = nums.size() - 1, sum;
    while (l < h)
    {
        sum = nums[l] + nums[h];
        if (sum == target)
        {
            nums.push_back(nums[l]);
            nums.push_back(nums[h]);
            return nums;
        }
        if (sum > target)
        {
            h--;
        }
        else
        {
            l++;
        }
    }

    return nums;
}
int main()
{

    return 0;
}