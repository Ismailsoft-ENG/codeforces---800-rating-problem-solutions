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
        int n, m;
        string p, q;
        cin >> n >> m;
        cin >> p >> q;
        map<char, int> mp, mp1;
        for (int i = 0; i < p.size(); i++)
        {
            mp[p[i]]++;
        }
        for (int i = 0; i < q.size(); i++)
        {
            mp1[q[i]]++;
        }
        bool flag = true;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int rem = mp[c] - mp1[c];
            int count = 0;
            if (c == 's' || c == 'i' || c == 'x')
            {
                count = 1;
            }
            if (rem != count)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}