#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, p = 0;
    cin >> m >> n;
    int arra[m - 1];
    for (int i = 0; i < m; i++)
    {
        cin >> arra[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (arra[i] <= 0)
        {
            continue;
        }
        else if (arra[i] >= arra[n - 1])
            p++;
    }
    cout << p;
    return 0;
}