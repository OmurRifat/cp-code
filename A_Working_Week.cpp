#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 6)
        {
            cout << 0 << endl;
        }
        else if (n % 3 == 0)
        {
            m = n / 3;
            cout << m << endl;
        }
        else
        {
            m = (n / 3) - 2;
            cout << m << endl;
        }
        m = 0;
    }
    return 0;
}