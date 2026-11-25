#include <iostream>
#include <vector>
using namespace std;
vector<int> sort012(vector<int> &a)
{
    int low = 0, mid = 0, high = a.size() - 1;
    while (mid <= high)
    {
      if (a[mid]== 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
          
        }else
        {
            mid++;
        }
    }

    return a;
}
int main()
{vector<int>a ,b;
    a={1,2,0,1};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    b=sort012(a);
    cout<<endl;
     for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}