// JUMP!!
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string canJump(vector<int> &nums)
{
    int maxReach = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (i > maxReach)
            return "NO";
        maxReach = max(maxReach, i + nums[i]);
        if (maxReach >= n - 1)
            return "YES";
    }

    return "NO";
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << canJump(nums) << endl;
    return 0;
}
