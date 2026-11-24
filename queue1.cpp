#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{
    int temp;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return nums;
};

int main()
{
    vector<int> a, b;
    a = {9, 8, 7, 6, 5,5, 4, 3, 2, 1,33,15,5};
    b = bubbleSort(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}