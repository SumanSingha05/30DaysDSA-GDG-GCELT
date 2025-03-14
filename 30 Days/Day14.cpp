// Implement pow(x , n) which calculates x raised to the power n(xⁿ)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double power(double x, int n)
{
    double result = 1.0;
    long long abs_n = n;
    if (n < 0)
    {
        abs_n = -abs_n;
        x = 1.0 / x;
    }

    while (abs_n > 0)
    {
        if (abs_n % 2 == 1)
        {
            result *= x;
        }
        x *= x;
        abs_n /= 2;
    }

    return result;
}

int main()
{
    double x;
    int n;
    cin >> x >> n;
    cout << fixed << setprecision(5) << power(x, n) << endl;
    return 0;
}
