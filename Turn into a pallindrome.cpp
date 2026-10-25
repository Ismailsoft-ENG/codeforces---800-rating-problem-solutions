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
        char c;
        cin >> c;
        string s;
        cin >> s;
        string t = s;
        reverse(s.begin(), s.end());
        int i = 0;
        int j = n - 1;
        int count = 0;
        int count1 = 0;
        if (s == t)
        {
            cout << "0" << endl;
        }
        else
        {

            while (i < j)
            {
                if (s[i] != s[j])
                {
                    if (s[i] == c || s[j] == c)
                    {
                        count++;
                    }
                    else
                        count1 += 2;
                }
                i++;
                j--;
            }
             cout << count + count1 << endl;
        }
       
    }

    return 0;
}
