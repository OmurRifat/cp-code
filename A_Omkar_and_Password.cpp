#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, p;
    multiset<int> ms;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            ms.insert(p);
        }
        int countingNum = 0;
        for (auto it : ms)
        {
            countingNum = ms.count(it);
            if (countingNum == ms.size())
            {
                cout << ms.size() << endl;
                break;
            }
            else
                cout << 1 << endl;
            break;
        }
        ms.clear();
    }
    return 0;
}