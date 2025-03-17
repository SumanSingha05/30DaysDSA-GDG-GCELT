// Nth Root You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then returns -1.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int nthRoot(int n, int m)
{
    int low = 1, high = m;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long power = pow(mid, n);

        if (power == m)
            return mid;
        else if (power < m)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << nthRoot(n, m) << endl;
    return 0;
}
