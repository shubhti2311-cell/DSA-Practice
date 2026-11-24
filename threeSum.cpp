#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int l, h = nums.size() - 1, sum = 0, target=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        l = i + 1, h = nums.size() - 1;
        while (l < h)
        {
            sum = nums[i] + nums[l] + nums[h];
            if (sum == target)
            {
                ans.push_back({nums[l], nums[h], nums[i]});
                l++;
                h--;
                if (l < h && nums[l] == nums[l - 1])
                    l++;
                if (l < h && nums[h] == nums[h + 1])
                    h--;
            }
            else if (sum > target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
    }
    return ans;
}
int main()
{

    return 0;
}rong Answer
212 / 316 testcases passed


Input
nums =
[-2,0,3,-1,4,0,3,4,1,1,1,-3,-5,4,0]

Use Testcase
Output
[[1,4,-5],[1,4,-5],[-1,4,-3],[0,3,-3],[-1,3,-2],[1,1,-2],[0,1,-1],[0,1,-1],[0,0,0]]
Expected
[[-5,1,4],[-3,-1,4],[-3,0,3],[-2,-1,3],[-2,1,1],[-1,0,1],[0,0,0]]
Code
C++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int l, h = nums.size() - 1, sum = 0, target=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        l = i + 1, h = nums.size() - 1;
        while (l < h)
        {
            sum = nums[i] + nums[l] + nums[h];
            if (sum == target)
            {
                ans.push_back({nums[l], nums[h], nums[i]});
                l++;
                h--;
                if (l < h && nums[l] == nums[l - 1])
                    l++;
                if (l < h && nums[h] == nums[h + 1])
                    h--;
            }
            else if (sum > target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
    }
    return ans;
    }
};


