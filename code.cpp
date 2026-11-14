#include <iostream>
#include<vector>
using namespace std;
vector<int> selectionSort(vector<int>&nums){
    int n=nums.size(),minIndex;
    for (int i = 0; i < n-1; i++)
    {
        minIndex=i;
        for (int  j= i+1; j < n; j++)
        {
           if (nums[j]<nums[minIndex])
           {
           minIndex=j;
           }
           
        }
        
swap(nums[i],nums[minIndex]);
    }
    
    return nums;
}
int main() {
    
    return 0;
}
