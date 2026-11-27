
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
        int l, a, b;
        cin >> l >> a >> b;
        vector<int> v;
        vector<int> v1;
        int rem = 0;
        int rem2 = 0;
        int i = 0;
        int j = 0;
        while (true)
        {
            v.push_back(rem);
            rem = (rem + a) % l;
            if (rem == 0)
                break;
        }

        while (true)
        {
            v1.push_back(rem2);
            rem2 = (rem2 + b) % l;
            if (rem2 == 0)
                break;
        }
        int count = 0;
        for (i = 0; i < v.size(); i++)
        {
            for (j = 0; j < v1.size(); j++)
            {
                if (v[i] == v1[j])
                {
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
