#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (b < c)
        {
            if (abs(a - 1) < (abs(b - c) + abs(c - 1)))
            {
                cout << 1 << endl;
            }
            else if (abs(a - 1) > (abs(b - c) + abs(c - 1)))
                cout << 2 << endl;
            else
                cout << 3 << endl;
        }
        else if (b > c)
        {
            if (abs(a - 1) < abs(b - 1))
                cout << 1 << endl;
            else if (abs(a - 1) > abs(b - 1))
                cout << 2 << endl;
            else
                cout << 3 << endl;
        }
    }
    return 0;
}