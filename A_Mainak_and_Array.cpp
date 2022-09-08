#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, m;
    cin >> p;
    while (p != 0)
    {
        int x, y, n;
        cin >> m;
        int arra[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arra[i];
        }
        n = sizeof(arra) / sizeof(arra[0]);
        x = sizeof(arra);
        sort(arra, (arra + n));
        y = arra[n] - arra[0];
        cout << y << endl;
        p--;
    }
    return 0;
}