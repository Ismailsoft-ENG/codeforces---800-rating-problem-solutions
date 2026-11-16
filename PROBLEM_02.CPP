#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int X;
        cin >> X;
        if (X % 10 == 0)
            cout << 100 - X << endl;
        else
        {
            if (X % 10 != 0)
            {
                int mod = X / 10;
                int res = mod + 1;
                int mul = res * 10;
                cout << 100 - mul << endl;
            }
        }
    }

    return 0;
}
