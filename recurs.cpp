#include <iostream>
using namespace std;

bool IsarraySorted(int a[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(a[i-1]>a[i]){
        return false;
    }
    return IsarraySorted(a,n,i+1);
}
int linearSearch(int a[],int n,int target,int i){
    if(i==n){
        return 0;
    }
    if(a[i]==target){
        return i;
    }
    return linearSearch(a,n,target,i+1);
}
int main() {
    int a[]={1,2,3,4,5,6,7};
 
cout<<linearSearch(a,7,5,0);
    return 0;
}



