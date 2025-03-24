// Find peak element.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1])
            right = mid;
        else
            left = mid + 1;
    }

    return nums[left];
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << findPeakElement(nums) << endl;
    return 0;
}
