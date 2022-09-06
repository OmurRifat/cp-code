#include <iostream>
using namespace std;

int main()
{

    int x;
    // scanf("%d", &x);
    cin >> x;
    if (x == 2)
        cout << "No" << endl;
    else if (x % 2 == 0)
        // printf("yes");
        cout << "YES" << endl;
    else
        // printf("No");
        cout << "NO" << endl;
    return 0;
}