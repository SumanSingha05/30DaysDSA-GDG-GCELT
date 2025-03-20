// Climbing Stairs 37
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int climbStairs(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int prev1 = 2, prev2 = 1, ways;
    for (int i = 3; i <= n; i++)
    {
        ways = prev1 + prev2; // f(n) = f(n-1) + f(n-2)
        prev2 = prev1;
        prev1 = ways;
    }
    return ways;
}

int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n) << endl;
    return 0;
}
