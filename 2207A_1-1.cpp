#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn = 0, mx = 0;
        int count= 0; 
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else if (i > 0 && i < n - 1 && s[i - 1] == '1' && s[i + 1] == '1')
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    mx += count;
                    mn += count - (count - 1) / 2;
                    count = 0;
                }
            }
        }
        if (count > 0)
        {
            mx += count;
            mn += count - (count - 1) / 2;
        }

        cout << mn << " " << mx << endl;
    }

    return 0;
}