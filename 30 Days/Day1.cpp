//Write a Program to swap two integer numbers without using 3rd Variable. Don't use functions

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;


    cout << a << " " << b << endl;

    return 0;
}