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
        string s = "codeforces";
        char c;
        cin >> c;
        if (s.find(c) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
