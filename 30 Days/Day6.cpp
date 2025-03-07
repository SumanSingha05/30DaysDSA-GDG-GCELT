// Find the missing element.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    int numbers[1000];
    
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    int totalSum = (size + 1) * (size + 2) / 2;
    
    int arraySum = 0;
    for(int i = 0; i < size; i++) {
    arraySum += numbers[i];
    }
    int missingNumber = totalSum - arraySum;
    cout << missingNumber << endl;
    
    return 0;
}
