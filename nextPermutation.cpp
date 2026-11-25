#include <iostream>
#include <vector>
using namespace std;
void nextPermuation(vector<int>& nums){
    int i;
    for ( i =nums.size()-1; i >=0; i--)
    {
      if (nums[i-1]<nums[i])
      {
        break;
      }
      int j=nums.size()-1;
      while (nums[j]<nums[i])
      {
      break;
      }
      swap(nums[i],nums[j]);
      int k=i,h=nums.size()-1;
      while (k<h)
      {
        swap(nums[k],nums[h]);
        k++;
        h--;
      }
      
      
    }
    
}
int main() {
    
    return 0;
}

