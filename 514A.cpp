#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, p;
    string str1, str2;
    cin >> str1;
    for (int i = (str1.size() - 1); i >= 0; i--)
    {
        if (str1[i] >= 53)
        {
            str1[i] = 48 + (57 - str1[i]);
            str2.push_back(str1[i]);
        }
        else
            str2.push_back(str1[i]);
        // cout << str1[i];
    }
    reverse(str2.begin(), str2.end());
    if (str2.front() == 48)
    {
        str2.front() = 57;
    }
    cout << str2;
    return 0;
}