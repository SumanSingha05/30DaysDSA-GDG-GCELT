// Find Products Less Than or Equal To N
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void uniqueOutputs(long long n)
{
    vector<long long> result;
    long long val = 1, i = 1;

    while (val <= n)
    {
        result.push_back(val);
        i++;
        val *= i;
    }

    for (size_t j = 0; j < result.size(); j++)
    {
        cout << result[j];
        if (j != result.size() - 1)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    long long n;
    cin >> n;
    uniqueOutputs(n);
    return 0;
}
