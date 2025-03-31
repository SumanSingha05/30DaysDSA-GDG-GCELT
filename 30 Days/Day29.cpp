// Reach the target.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, int> dp;

int countWays(vector<int> &arr, int index, int currentSum, int target)
{
    if (index == arr.size())
    {
        return (currentSum == target) ? 1 : 0;
    }

    string key = to_string(index) + "," + to_string(currentSum);
    if (dp.find(key) != dp.end())
        return dp[key];

    int add = countWays(arr, index + 1, currentSum + arr[index], target);
    int subtract = countWays(arr, index + 1, currentSum - arr[index], target);

    dp[key] = add + subtract;
    return dp[key];
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> target;

    dp.clear();

    cout << countWays(arr, 0, 0, target) << endl;

    return 0;
}