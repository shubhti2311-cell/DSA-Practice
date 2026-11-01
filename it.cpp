#include <iostream>
using namespace std;
void printArray(int a[],int n,int i){
    
    if(i==n){
        return;
    }
     printArray(a,n,i+1);
    cout<<a[i]<<" ";
    // printArray(a,n,i+1);
};
int main() {
    int a[]={10 ,23,34,63,67,70};
    int n=6;
    int i=0;
    printArray(a,n,i);
    return 0;
}