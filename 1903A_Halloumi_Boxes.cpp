#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(a);
        sort(v.begin(), v.end());
        if (a == v)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}