#include <bits/stdc++.h>
using namespace std;
int main()
{
    string g;
    string h;
    string t;
    cin >> g >> h >> t;

    vector<char> v;
    vector<char> v1;
    for (int i = 0; i < g.size(); i++)
    {
        v.push_back(g[i]);
    }
    for (int l = 0; l < h.size(); l++)
    {
        v.push_back(h[l]);
    }
    for (int j = 0; j < t.size(); j++)
    {
        v1.push_back(t[j]);
    }
    map<char, int> mp;
    map<char, int> mp1;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    for (int k = 0; k < v1.size(); k++)
    {
        mp1[v1[k]]++;
    }
    vector<int> v2;
    vector<int> v3;
    for (auto x : mp)
    {
        v2.push_back(x.second);
    }
    for (auto y : mp1)
    {
        v3.push_back(y.second);
    }
    if (v2 == v3)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
