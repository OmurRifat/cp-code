#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m = 0, p, q = 0;
    set<int> st;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            if (!st.count(p))
            {
                st.insert(p);
            }
            else
            {
                p++;
                st.insert(p);
            }
        }
        cout << st.size() << endl;
        st.clear();
        m = 0;
    }
    return 0;
}