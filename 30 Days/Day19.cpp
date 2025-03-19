// House Robber
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool canRob(vector<int> &nums, int k, int capability)
{
    int count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= capability)
        {
            count++; // Rob this house
            i++;     // Skip the adjacent house
        }
        if (count >= k)
            return true;
    }
    return false;
}

int minCapability(vector<int> &nums, int k)
{
    int left = *min_element(nums.begin(), nums.end());
    int right = *max_element(nums.begin(), nums.end());
    int result = right;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (canRob(nums, k, mid))
        {
            result = mid;
            right = mid - 1; // Try for a lower capability
        }
        else
        {
            left = mid + 1;
        }
    }
    return result;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> k;
    cout << minCapability(nums, k) << endl;
    return 0;
}
