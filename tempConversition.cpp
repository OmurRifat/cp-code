#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y;
    int n, i = 1, f, c;

    cin >> n;
    while (n != 0)
    {
        cin >> c >> f;
        y = (1.8 * c) + 32;
        // temp = y + f;
        if ((y + f) < 32)
        {
            n--;
            i++;
            continue;
        }
        x = ((y + f) - 32) / 1.8;
        cout << "Case " << i << ": " << setprecision(2) << fixed << x << endl;
        n--;
        i++;
    }
    return 0;
}