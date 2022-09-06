#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str2;
    // cin >> str2;
    // std::string str = str2;
    // std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout << str;

    string str;
    int i = 1;
    while (cin >> str)
    {
        if (str == "#")
            break;
        else if (str.length() > 14)
            continue;
        else if (str == "HELLO")
            cout << "Case " << i << ": "
                 << "ENGLISH\n";
        else if (str == "HOLA")
            cout << "Case " << i << ": "
                 << "SPANISH\n";
        else if (str == "HALLO")
            cout << "Case " << i << ": "
                 << "GERMAN\n";
        else if (str == "BONJOUR")
            cout << "Case " << i << ": "
                 << "FRENCH\n";
        else if (str == "CIAO")
            cout << "Case " << i << ": "
                 << "ITALIAN\n";
        else if (str == "ZDRAVSTVUJTE")
            cout << "Case " << i << ": "
                 << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";
        i++;
        // cout << str.length();
    }

    return 0;
}