#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, arra[m], temp, h = 0, l = 0, j = 1;
    cin >> n;
    while (n != 0)
    {
        cin >> m;
        cin >> arra[0];
        temp = arra[0];
        for (int i = 1; i < m; i++)
        {
            cin >> arra[i];
            if (arra[i] > arra[i - 1])
                h++;
            else if (arra[i] < arra[i - 1])
                l++;
            else
                continue;
        }
        cout << "Case " << j << ": " << h << " " << l << endl;
        j++;
        n--;
        h = 0;
        l = 0;
    }
    return 0;
}