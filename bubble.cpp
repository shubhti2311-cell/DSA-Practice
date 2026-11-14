#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int temp;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size() - i - 1; j++) {

                if(nums[j] > nums[j+1]) {
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        return nums;
    }
};
int main() {
    
    return 0;
}