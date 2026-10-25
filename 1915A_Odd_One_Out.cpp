#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                cout << x.first << endl;
            }
        }
    }

    return 0;
}
