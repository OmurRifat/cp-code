#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2)
            cout << 1 << endl;
        else if (n == 3)
            cout << 7 << endl;
        else if (n % 2 == 0)
        {
            long long int x = n / 2;
            while (x--)
            {
                cout << 1;
            }
            cout << endl;
        }
        else
        {
            long long int x = n / 2;
            x = x - 1;
            cout << 7;
            while (x--)
            {
                cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}