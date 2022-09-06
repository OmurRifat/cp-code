#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp = 0;
    // int arra[n];
    // arra[0] = 0;
    while (cin >> n)
    {
        if (n == 0)
            break;
        for (int i = n; i > 0; i--)
        {
            temp = temp + (i * i);
        }
        cout << temp << endl;
        temp = 0;
    }
    // cout << temp << endl;
    return 0;
}