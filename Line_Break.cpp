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
        cin >> n >> m;
        string s;
        int sum = 0;
        int count = 0;
        int  flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (!flag && sum + s.size() <= m)
            {
                sum += s.size();
                count++;
            }
            else
            {
                flag = 1;
            }
        }

        cout << count << '\n';
    }

    return 0;
}