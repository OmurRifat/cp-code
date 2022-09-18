#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            s[i] = 'b';
    }
    cout << s << endl;

    return 0;
}