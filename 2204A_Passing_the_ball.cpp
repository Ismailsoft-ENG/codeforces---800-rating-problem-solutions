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
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i]);
            if (s[i] == 'L')
            {
                break;
            }
        }
        int sz = v.size();
        cout << sz << endl;
    }

    return 0;
}
