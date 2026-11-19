#include <iostream>
#include <vector>
using namespace std;
int FindmajorElement(vector<int> &nums)
{
    int majority=nums[0], count=0;
    for (int  i = 0; i < nums.size(); i++)
    {

        if (count==0)
        {
            majority=nums[i];
        }
        if (nums[i]==majority)
        {
           count++;

        }else{
            count--;
        }
        
        
        
    }
    return majority;
}
int main()
{
    vector<int> nums={7, 0, 0, 1, 7, 7, 2, 7, 7};
cout<<FindmajorElement(nums);

    return 0;
}