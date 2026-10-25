#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count++;
            if (s[i + 1] == '1' && count < 7)
            {
                count = 0;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                count2++;
                if (s[i + 1] == '0' && count2 < 7)
                {
                    count2 = 0;
                }
            }
        }
    }
    if (count >= 7)
    {
        cout << "YES" << endl;
    }
    else if (count2 >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
