#include <iostream>
using namespace std;
int arraySum(int a[],int n,int i){
if (i==n)
{
   return 0;
}
return a[i]+arraySum(a,n,i+1);
};
// int maxElem(int a[],int n,int i,){
    
//     if(a[i]>max){
//         max=a[i];
//     }
//     if(i==n){
//         return max;
//     }
//     return maxElem(a,n,i+1);

// }

int main() {
    int a[]={1,2,3,4,5,6,7};
  cout<<"the sum of an array a ="<<  arraySum(a,7,0);
//   cout<<"the maximum element of an array = "<<maxElem(a,7,0);
    return 0;
}



