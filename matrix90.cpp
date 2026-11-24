#include <iostream>
#include <vector>
using namespace std;
void rotateMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    int f=0,b=m-1,i=0;
    while(i<n)
    { f=0,b=m-1;
        while (f<b)
        {
            swap(matrix[i][f],matrix[i][b]);
            f++;
            b--;
        }
        
       i++;
    }
    
}
int main()
{

    return 0;
}
