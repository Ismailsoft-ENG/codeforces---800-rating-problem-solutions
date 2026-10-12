#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<char> v;
        vector<char> v1;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s[0]);
        }
        int flag = 0;

        for (int i = 0; i < m; i++)
        {
            string k;
            cin >> k;
            for (int j = 0; j < k.size(); j++)
            {
                v1.push_back(k[j]);
            }
        }

        v1.erase(unique(v1.begin(), v1.end()), v1.end());

        for (int j = 0; j < v1.size(); j++)
        {
            auto it = find(v.begin(), v.end(), tolower(v1[j]));
            if (it == v.end())
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}