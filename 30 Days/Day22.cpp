// Assign Cookies
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0, count = 0;
    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
        }
        j++;
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> g(n);
    for (int i = 0; i < n; i++)
        cin >> g[i];

    cin >> m;
    vector<int> s(m);
    for (int i = 0; i < m; i++)
        cin >> s[i];

    cout << findContentChildren(g, s) << endl;
    return 0;
}
