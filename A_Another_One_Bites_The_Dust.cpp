#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, b, c, m = 0;
    cin >> a >> b >> c;
    if (a < b)
    {
        m = (c * 2) + a + (a + 1);
    }
    else if (b < a)
        m = (c * 2) + b + (b + 1);
    else if (a == b)
        m = (c * 2) + a + b;
    cout << m << endl;
    return 0;
}