// Palindromic Array 3 Given an array arr[] of positive integers. ( Return true if all the array elements are palindrome otherwise, return false.)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(int num)
{
    int rev = 0, temp = num;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

int main()
{
    int num;
    bool allPalindrome = true;

    while (cin >> num)
    {
        if (!isPalindrome(num))
        {
            allPalindrome = false;
            break;
        }
    }

    cout << (allPalindrome ? "true" : "false") << endl;
    return 0;
}
