#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = nums[0], maxSum = nums[0],i=0,j=0;
    while (j<nums.size())
    {
        sum=sum+nums[j];
      
        maxSum=max(maxSum,sum);
        if (maxSum==0)
        {
            sum=0;
        }
        
        j++;
    }
    
    return maxSum;
}
int main()
{

    return 0;
}
