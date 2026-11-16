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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x;
        cin >> x;
        int mx = *max_element(a.begin(), a.end());
        int mn = *min_element(a.begin(), a.end());
        if (x >= mn && x <= mx)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
