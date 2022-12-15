#include <iostream>
#include <vector>
using namespace std;

// function to calculate the running sum of an array
vector<int> runningSum(vector<int>& nums) {
    vector<int> result(nums.size());
    result[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        result[i] = result[i-1] + nums[i];
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; // given array

    // calculate the running sum
    vector<int> runningSumArr = runningSum(nums);

    // print the result
    for (int i = 0; i < runningSumArr.size(); i++) {
        cout << runningSumArr[i] << " ";
    }
    // Output: 1 3 6 10 15

    return 0;
}
