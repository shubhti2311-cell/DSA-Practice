#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = nums[0];
    int i = 0, j = 0, maxsum = 1;
    int n = nums.size();
    while (i < n && j < n)
    {

        sum = sum + nums[j];

        if (j >= n)
        {
            sum = sum - nums[i];
            i++;
        }

        maxsum = max(maxsum, sum);
        j++;
    }
    return maxsum;
}
int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(a);

    return 0;
}