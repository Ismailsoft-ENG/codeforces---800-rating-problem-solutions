
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
        int a[n];
        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
                cnt++;
            else
                cnt1++;
        }
        if (cnt > 0 && cnt1 > 0)
            cout << "YES" << endl;
        else if (cnt1 == n && n % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
