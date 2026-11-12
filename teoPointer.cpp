#include <iostream>
#include<vector>
using namespace std;
int arr( vector<int> a ,int k){
int l=k-1,h=a.size()-1,sum=0;
for (int i = 0; i < k; i++)
{
    sum+=a[i];
}
int maxSum=sum;
while (l>=0){
sum=sum-a[l];

sum+=a[h];
maxSum=max(maxSum,sum);
l--;
h--;
}
return maxSum;
};
int main() {
    
    return 0;
}