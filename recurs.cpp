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
int BinSearch(int a[],int l,int h,int target){
   
    if(l>h){
        return -1;
    }
     int mid=l+(h-l)/2;
if(a[mid]==target){
    return mid;
}
if(a[mid]>target){
    return BinSearch(a,l,mid-1,target);
}else{
     return BinSearch(a,mid+1,h,target);
}

}
int reverseArr(int a[],int n,int i){
    if (i>=n)
    {
       return ;

    }
    int temp;
    temp=a[i];
    a[i]=a[n];
    a[n]=temp;
    return reverseArr(a,n-1,i+1);
}
int main() {
    int a[]={1,2,3,4,5,6,7};
cout<<BinSearch(a,0,6,4);
    return 0;
}



