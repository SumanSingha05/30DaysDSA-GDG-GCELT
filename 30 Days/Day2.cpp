// Given an array arr of non-negative integers, return the maximum product of two numbers possible.

#include <iostream>
#include <vector>
#include <limits.h>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input); 
    
    vector<int> arr;
    stringstream ss(input);
    int num;

    while (ss >> num) {
        arr.push_back(num);
    }

    if (arr.size() < 2) {
        cout << "Array must contain at least two numbers" << endl;
        return 1;  // Error case (edge case handling)
    }
    
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int n : arr) {
        if (n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }
    }

    cout << (max1 * max2) << endl; 

    return 0;
}