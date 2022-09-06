#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, w, h, i = 1;
    cin >> n;
    while (n != 0)
    {
        cin >> l >> w >> h;
        if (l <= 20 && w <= 20 && h <= 20)
            cout << "Case " << i << ":"
                 << " good\n";
        else
            cout << "Case " << i << ":"
                 << " bad\n";
        i++;
        n--;
    }
    return 0;
}