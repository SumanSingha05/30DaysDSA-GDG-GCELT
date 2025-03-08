// Write a function to calculate the binary equivalent of a decimal number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void decimalToBinary(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary; 
        n /= 2;
    }
    
    cout << binary << endl;
}

int main() {
    int n;
    cin >> n;
    decimalToBinary(n);
    return 0;
}
