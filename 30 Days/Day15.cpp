// Find the leaders. Take input the size and elements for an integer array from the user. Now print the leaders in the array.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findLeaders(vector<int> &arr, int n)
{
    vector<int> leaders;
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxRight)
        {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    for (int i = leaders.size() - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findLeaders(arr, n);
    return 0;
}
