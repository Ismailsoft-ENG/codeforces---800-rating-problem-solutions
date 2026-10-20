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
        int k;
        cin >> k;

        long long count = 0;

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;

            if (x > 1)
            {
                count += x - 1;
            }
        }

        if (count >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}