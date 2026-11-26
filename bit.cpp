#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
void Convert2Binary(int n){
    vector<int> a;
    while (n>=1)
    {
        a.push_back(n%2);
        n=n/2;
    }
    for (int i = a.size()-1; i>=0; i--)
    {
       cout<<a[i]<<" ";
    }
    
}
int BinarytoDecimal(string a){
    int j=0,nums=0;
    for (int i = a.length(); i>=0; i--)
    {
        if (a[i]=='1')
        {
            nums=nums+2^j;
        }
        j++;
    }
    return nums;
}
int main() {
    
    return 0;
}
