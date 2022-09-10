#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, n, m;
    vector<int> v;
    cin >> x;
    while (x != 0)
    {
        cin >> y;
        for (int i = 0; i < y; i++)
        {
            cin >> z;
            v.push_back(z);
            // m = *max_element(v.begin(), v.end());
            // if (m % 2 != 0)
            // {
            //     n = (i + 1);
            // }
        }
        m = *max_element(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == m)
            {
                n = i + 1;
                break;
            }
        }
        // sort(v.begin(), v.end());
        // for(int i = 0; )
        cout << n << endl;
        x--;
        v.clear();
    }
    return 0;
}