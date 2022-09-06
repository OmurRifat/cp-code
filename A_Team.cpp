#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z;
    int k = 0;
    cin >> n;
    while (n != 0)
    {
        cin >> x >> y >> z;
        if (x == 1 && y == 1)
            k++;
        else if (y == 1 && z == 1)
            k++;
        else if (x == 1 && z == 1)
            k++;
        else
            k = k;
        n--;
    }
    cout << k;
    return 0;
}