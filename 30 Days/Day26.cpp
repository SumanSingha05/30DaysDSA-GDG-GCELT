// First Unique Character in a String 10
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;
    cin >> s;

    cout << firstUniqChar(s) << endl;

    return 0;
}
