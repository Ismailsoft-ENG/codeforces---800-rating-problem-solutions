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
        vector<int> P(n);
        for (int i = 0; i < n; i++)
        {
            cin >> P[i];
        }
        vector<int> v(P);
        sort(v.begin(), v.end());
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != P[i])
            {
                count++;
            }
            else
                count1++;
        }

        if (count == count1)
            cout << "YES" << endl;
        else if (count > count1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
