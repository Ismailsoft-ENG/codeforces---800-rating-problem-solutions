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

        string a;
        cin >> a;
        string b;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 'q')
            {
                b.push_back('p');
            }
            else if (a[i] == 'p')
            {
                b.push_back('q');
            }
            else
                b.push_back(a[i]);
        }
        cout << b << endl;
    }

    return 0;
}
