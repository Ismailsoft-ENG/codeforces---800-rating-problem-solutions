#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        set<char> st;
        for (char c : s)
        {
            c = tolower(c);
            st.insert(c);
        }
        int sz = st.size();
        if (sz >= 26)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;

        
    }

    return 0;
}
