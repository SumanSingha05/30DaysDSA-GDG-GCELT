#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10; 
        }
        num = sum; 
    }
    return num;
}

int main() {
    int num;
    cin >> num;  
    cout << addDigits(num) << endl;  
    return 0;
}
