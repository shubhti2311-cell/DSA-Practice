#include <iostream>
using namespace std;
int maxPoints(int cardPoints[], int cardPoints.size(), int k)
{
    int l = 0, r = k-1, sum, maxSum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += cardPoints[i];
    }
    while (l < k)
    {
        sum = sum - cardPoints[l];
        l++;
        r++;
        if (r > cardPoints.size() - 1)
        {
            r = 0;
        }
        sum=sum+cardPoints[r];
 maxSum = max(maxSum, sum);
        
    }
    return maxSum;
}
int main()
{

    return 0;
}
