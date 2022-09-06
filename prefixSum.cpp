#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k, l, x = 0;
    cin >> n;
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    for (int j = 1; j < n; j++)
    {
        arra[j] = arra[j] + arra[j - 1];
    }
    cin >> m;
    while (m != 0)
    {
        cin >> k >> l;
        if (k == 0)
            x = arra[l];
        else
            x = arra[l] - arra[k - 1];
        cout << x << endl;
        m--;
    }
    return 0;
}