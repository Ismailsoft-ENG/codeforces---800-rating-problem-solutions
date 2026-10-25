#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(max(a, b), c);
        int mn = min(min(a, b), c);
        if (a == mx && b == mn)
        {
            cout << c << endl;
        }
        else if (b == mx && a == mn)
        {
            cout << c << endl;
        }
        else if (a == mx && c == mn)
        {
            cout << b << endl;
        }
        else if (c == mx && a == mn)
        {
            cout << b << endl;
        }
        else if (b == mx && c == mn)
        {
            cout << a << endl;
        }
        else
        {
            cout << a << endl;
        }
    }

    return 0;
}
