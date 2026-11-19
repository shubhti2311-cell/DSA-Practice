#include <iostream>
#include <vector>
using namespace std;
vector<int> findLeaders(vector<int> &a)
{
    int n = a.size(), max = a[n-1];
    vector<int> b;
    b.push_back(a[n-1]);
    int i=n-1;
    while (i--)
    {
       if (a[i]>max)
       {
        max=a[i];
        b.push_back(max);
       }
       
    }
    reverse(b.begin(),b.end());
    return b;
}

int main()
{

    return 0;
}
