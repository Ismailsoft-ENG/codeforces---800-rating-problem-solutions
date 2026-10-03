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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(a, a + n);
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (mp[v[i]] == 1)
            {
                cout << i+1 << endl;
            }
        }
    }
    return 0;
}
