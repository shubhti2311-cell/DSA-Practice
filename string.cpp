#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout<<"enter a string: ";



    cin>>a;

    
    for (int i = 0; i < a.size(); i++)
    {
        if (!(a[i] >= 'a' && a[i] <='z') && !(a[i] >= 'A' && a[i] <= 'Z'))
        {
            a.erase(i,0) ;
            i--;
        }
    }
cout<<a;

    return 0;
}