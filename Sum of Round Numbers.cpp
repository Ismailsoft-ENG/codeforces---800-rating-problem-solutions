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
        string s = to_string(n);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                cout << s[i];
                int zeros = s.size() - i - 1;
                for (int j = 0; j < zeros; j++)
                {
                    cout << "0";
                }
                
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
