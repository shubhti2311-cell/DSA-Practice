#include <iostream>
#include <vector>
using namespace std;
vector<int> insertionSort(vector<int>&nums){
int temp,j;

for (int i = 0; i < nums.size(); i++)
{ j=i;
  while (j--)
  {
    if (nums[j+1]<nums[j])
    {
    temp=nums[j];
    nums[j]=nums[j+1];
    nums[j+1]=temp;
    }
    
  }
  
}

return nums;
}
using namespace std;

int main() {
    vector<int>nums={2,3,4,3,1,6,3,7,2};
    insertionSort(nums);
    return 0;
}