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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int res = abs(a[i] - a[i + 1]);
            if (res <= 1)
            {
                count++;
            }
        }
        if (count == n - 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
