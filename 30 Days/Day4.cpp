// Partition Array According to Given Pivot
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums, int pivot) {
    vector<int> less, equal, greater;
    
    for (int num : nums) {
        if (num < pivot) less.push_back(num);
        else if (num == pivot) equal.push_back(num);
        else greater.push_back(num);
    }

  
    less.insert(less.end(), equal.begin(), equal.end());
    less.insert(less.end(), greater.begin(), greater.end());

    return less;
}

int main() {
    string input;
    getline(cin, input); 
    int pivot;
    cin >> pivot;  

    vector<int> nums;
    stringstream ss(input);
    string temp;
    
    while (getline(ss, temp, ',')) {  
        nums.push_back(stoi(temp));
    }

    vector<int> result = rearrangeArray(nums, pivot);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << endl;

    return 0;
}
