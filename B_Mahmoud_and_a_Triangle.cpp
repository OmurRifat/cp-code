#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m = 0;
    vector<int> ms;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ms.push_back(n);
    }
    sort(ms.begin(), ms.end(), greater<int>());
    for (int i = 0; i < ms.size(); i++)
    {
        if (((ms[i + 1] + ms[i + 2]) >= ms[i]) && (ms.size() - i) >= 3)
        {
            cout << "YES" << endl;
            m = 1;
            break;
        }
    }
    if (m == 0)
        cout << "NO" << endl;
    ms.clear();
    m = 0;
    return 0;
}