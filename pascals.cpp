#include <iostream>
#include <vector>
using namespace std;
int pascalTriangleI(int rowindex, int c)
{
    int m = rowindex - 1, rowIndex = 0, k, fact1 = 1, fact2 = 1, fact3 = 1;
    for (int i = m; i >= 1; i--)
    {
        fact1 *= i;
    }
    for (int i = rowIndex; i >= 1; i--)
    {
        fact2 *= i;
    }
    for (int i = m - rowIndex; i >= 1; i--)
    {
        fact3 *= i;
    }
    k = (fact1) / (fact2 * fact3);
    return k;
}
ector<int> printNthRow(int rowIndex)
{
    int i = 1, current = 1, next;
    vector<int> a;
    a.push_back(1); // 1st element is always 1
    while (i <= rowIndex)
    {
        next = (current) * (rowIndex - 1 / i + 1);
        a.push_back(next);
        current = next;
        i++;
    }
    // a.push_back(1);//last element is always 1
    return a;
}
int main()
{
    cout << pascalTriangleI(4, 2);

    return 1;
}