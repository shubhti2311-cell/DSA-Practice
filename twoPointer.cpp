#include <iostream>
using namespace std;
int maxSumof4(int a[],int n,int k){
    int l=0,h=k-1,maxSum=0,sum;
    for (int i = 0; i < k; i++)
    {
        sum +=a[i];
    }
    
    while (h!=n-1)
    {
       sum=sum-a[l];
       l++;
       h++;
       sum=sum+a[h];
       if (sum>maxSum)
       {
       maxSum=sum;
       }
       
    }
    return maxSum;
}
int main() {
    
    return 0;
}