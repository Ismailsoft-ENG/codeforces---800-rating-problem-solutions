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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        int count = 0;
        int i = 0;
        for (int j = i + 1; j < 4; j++)
        {
            if (v[i] < v[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
