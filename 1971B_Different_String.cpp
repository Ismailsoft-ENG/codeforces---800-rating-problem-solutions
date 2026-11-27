#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string p = s;
        sort(p.begin(), p.end());
        if(s == p)
        {
            reverse(p.begin(), p.end());
        }
        if(s == p)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << p << endl;
        }
    }

    return 0;
}