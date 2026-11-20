#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums){
     int i=0,j=1,temp;
     int n=nums.size();
     while (j!=n)
     {
       if (nums[i]==nums[j])
       {
        
        j++;
       }
       else 
       {i++;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
      
       j++;
       }
     }
     
     
    int k=n-(j-i)+1;
    
    return k;
}
int main() {
    
vector<int>a={1,2};
for (int  i = 0; i <a.size(); i++)
     {
        cout<<a[i]<<" ";
     }
     cout<<endl<<"after loop runs it become "<<endl;
removeDuplicates(a);

    return 0;
}
