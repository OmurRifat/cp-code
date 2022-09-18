#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = 0;
            if (s[i] == '0')
            {
                x += s[i - 1] - '0';
                x += (s[i - 2] - '0') * 10;
                i -= 2;
            }
            else
            {
                x = s[i] - '0';
            }
            x--;
            ans.push_back('a' + x);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}