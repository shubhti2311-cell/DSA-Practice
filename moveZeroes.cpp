#include <iostream>
#include <vector>
using namespace std;
int moveZeroes(vector<int> &a)
{
    int i = 0, temp;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            break;
        }
    }
    int j = i;
    while (j < a.size())
    {
        if (a[j] == 0)
        {
            j++;
        }
        else
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i=j;
        }
    }
    
}
int main()
{

    return 0;
}