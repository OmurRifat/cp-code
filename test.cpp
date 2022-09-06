#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    for (int i = 0; i <= m; i++)
    {
        int ans = __gcd(a + i, b + i);
        cout << a + i << " " << b + i << " " << ans << " ";
        if (ans != 1)
            cout << "***";
        cout << endl;
    }
    return 0;
}