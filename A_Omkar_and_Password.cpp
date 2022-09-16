#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, p;
    vector<int> ms;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            ms.push_back(p);
        }
        sort(ms.begin(), ms.end());
        if (ms.front() == ms.back())
            cout << n << endl;
        else
            cout << 1 << endl;
        ms.clear();
    }
    return 0;
}