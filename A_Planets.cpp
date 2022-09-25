#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c, m, p = 0;
    set<int> vec;
    multiset<int> s;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        while (n--)
        {
            cin >> m;
            vec.insert(m);
            s.insert(m);
        }
        if (c == 1)
        {
            cout << vec.size() << endl;
        }
        else if (c > 1)
        {
            for (auto it : vec)
            {
                if (s.count(it) == 1)
                    p += 1;
                else if (s.count(it) >= 2 && s.count(it) >= c)
                    p = p + c;
                else if (s.count(it) >= 2 && s.count(it) < c)
                    p = p + s.count(it);
            }
            cout << p << endl;
        }
        vec.clear();
        s.clear();
        p = 0;
    }
    return 0;
}