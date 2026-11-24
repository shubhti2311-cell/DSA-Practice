#include <iostream>
#include <vector>
using namespace std;

vector<int> arrangeBysign(vector<int> &nums)
{

}

int main()
{
    vector<int> nums = {2, -1, 4, -3, 5, -4};

    vector<int> ans = arrangeBysign(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}