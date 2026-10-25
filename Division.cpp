#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;
        if (X >= -5000 && X <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (X >= 1400 && X <= 1599)
            cout << "Division 3" << endl;
        else if (X >= 1600 && X <= 1899)
            cout << "Division 2" << endl;
        else
        {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}
