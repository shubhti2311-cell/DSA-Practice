#include <iostream>
using namespace std;
int find(int a[],int n,int target){
int min=0,i=0;
while (a[i]<a[i+1]&& i<n)
{
    min++;
    i++;
}
int h=min,l=0,mid;
while (l<=h)
{
   mid=l+(h-l)/2;
   if(a[mid]==target){
   return mid;

}else if(a[mid]>target)
{
    h=mid-1;
}else {
    l=mid+1;
}

};
l=min+1,h=n-1;
while (l<=h)
{
   mid=l+(h-l)/2;
   if(a[mid]==target){
   return mid;

}else if(a[mid]>target)
{
    h=mid-1;
}else {
    l=mid+1;
}


}
return -1;}
int main() {
    
    return 0;
}
