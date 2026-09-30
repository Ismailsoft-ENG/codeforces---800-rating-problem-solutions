#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string S;
        cin >> S;
        int sz = S.size();
        if (sz <= 10)
        {
            cout << S << endl;
        }
        else
        {
            int se = S.size() - 2;
            string s = to_string(se);
            S.replace(1, S.size() - 2, s);
            cout << S << endl;
        }
    }

    return 0;
}
