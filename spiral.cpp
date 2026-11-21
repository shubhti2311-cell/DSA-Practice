#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, rith = n - 1, top = 0, bottom = m - 1;
    while (top > bottom && left < rith)
    {
        for (int i = left; i < rith; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i < bottom; i++)
        {
            ans.push_back(matrix[i][rith]);
        }
        rith--;
        for (int i = rith; i >= left; i--)
        {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(matrix[left][i]);
        }
        left++;
    }
}
int main()
{

    return 0;
}