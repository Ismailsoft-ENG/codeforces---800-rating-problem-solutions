#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rem = n % 2;
        if (rem == 0)
        {
            int ans = n / 2;
            cout << ans - 1 << endl;
        }
        else
        {
            int res = n / 2;
            cout << res << endl;
        }
    }

    return 0;
}
