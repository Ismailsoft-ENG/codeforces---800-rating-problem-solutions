
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int N;
        string s, t;

        cin >> N >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}