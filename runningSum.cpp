#include <iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    vector<int> b;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        b.push_back(sum);
    }
    return b;
}
int main()
{

    return 0;
}