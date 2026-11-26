#include <iostream>
#include <vector>
using namespace std;

int maxScore(vector<int> &cardScore, int k)
{
    int sum = 0, maxSum = 0, l = k - 1, h = cardScore.size() - 1;
    for (int i = 0; i < k; i++)
    {
        sum += cardScore[i];
    }
    while (l>=0)
    {
        sum = sum - cardScore[l];
        sum += cardScore[h];
        maxSum = max(maxSum, sum);
        l--;
        h--;
    }

    return maxSum;
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    cout << maxScore(a, 3);

    return 0;
}