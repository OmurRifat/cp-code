#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (scanf("%d", &num))
    {
        string arr[num];
        string arr2[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < num; i++)
        {
            if (arr[i].length() <= 10)
                // arr2[i] = arr[i];
                cout << arr[i];
            else
            {
                // arr[0] + (arr[i].length() - 2) + arr[arr[i].length() - 1];
                cout << arr[0] << (arr[i].length() - 2) << arr[arr[i].length() - 1] << endl;
            }
        }
    }
    return 0;
}