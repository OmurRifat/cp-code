#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n = m % 5;
    if (n == 0)
        cout << ((m / 5)) << endl;
    else
        cout << ((m / 5) + 1) << endl;
    return 0;
}