#include <iostream>
using namespace std;
int inarr(int a[],int n,int k){
int l=0,r=0,sum=0,maxlen;
while (r!=n)
{
    sum=sum+a[r];
    while (sum>k)
    {
       sum=sum-a[l];
       l+=1;
    }
    if (sum<=k)
    {
     
     maxlen=max(maxlen,r-l+1);
     r++;        
    }
    
}

}
int main() {
    
    return 0;
}
