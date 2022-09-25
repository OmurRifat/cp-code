#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, p, q = 0, x = 0, y, z, o = 0;
    vector<int> vec1;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            vec1.push_back(p);
            if (x < p)
            {
                x = p;
                z = i;
            }
            else if (x == p)
            {
                x = p;
                y = i;
            }
        }
        if (n == k)
        {
            for (auto it : vec1)
            {
                q = q + vec1[it];
            }
            cout << q << endl;
            q = 0;
        }
        else
        {
            for (int i = z; i <= (z + k); i++)
            {
                if (vec1[i] < vec1[(i % k) * k])
                {
                    vec1[i] = vec1[(i % k) * k];
                    vec1[(i % k) * k] = vec1[i];
                }
                q = q + vec1[i];
            }
            for (int i = y; i <= (y + k); i++)
            {
                if (vec1[i] < vec1[(i % k) * k])
                {
                    vec1[i] = vec1[(i % k) * k];
                    vec1[(i % k) * k] = vec1[i];
                }
                o = o + vec1[i];
            }
            if (q > o)
                cout << q << endl;
            else
                cout << o << endl;
        }
        vec1.clear();
        q = 0;
        x = 0;
        y = 0;
        z = 0;
        o = 0;
    }
    return 0;
}