#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (auto it : str)
    {
        cout << it << " ";
    }
    cout << endl;
    str.reserve();
    for (auto it : str)
    {
        cout << it << " ";
    }
    return 0;
}