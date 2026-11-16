#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> nums){
    int temp,j=0;
    for (int i = 0; i < nums.size(); i++)
   {
  cout<<nums[i]<<" ";
   }

    for (int i = 0; i < nums.size(); i++)
    {
        j=i+1;
        while(j--){
            if (nums[j+1]<nums[j])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                        }
            
        }
    }
    cout<<endl;
   for (int i = 0; i < nums.size(); i++)
   {
  cout<<nums[i]<<" ";
   }
    
}
int main() {
    vector<int> a={2,3,1,34,5,3};
    selectionSort(a);
    return 0;
}
