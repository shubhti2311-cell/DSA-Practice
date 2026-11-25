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
}