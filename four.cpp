#include <iostream>
#include <vector>
using namespace std;
void moveZeros(vector<int> &nums){
int i=0,j=0;
while (j<nums.size())
{
   if (nums[j]!=0)
   {
    swap(nums[i],nums[j]);
    i++;
   }
   j++;
    
   }
   
   
}


int main() {
    
    return 0;
}
