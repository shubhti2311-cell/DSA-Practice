#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int a[n] = {1, 2, 3, 5, 6, 7};
    int target = 12;
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (a[left] + a[right] == target)
        {
            cout << "left = " << left << endl
                 << "right = " << right << endl;
            break;
        }
        if (a[left] + a[right] > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return 0;
}