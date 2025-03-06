// Move Zeroes 21 ( Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. Note that you must do this in-place without making a copy of the array.)

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    size_t insertPos = 0;  

    for (int num : nums) {
        if (num != 0) {
            nums[insertPos++] = num;
        }
    }

    while (insertPos < nums.size()) {  
        nums[insertPos++] = 0;
    }
}

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    moveZeroes(nums);

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
