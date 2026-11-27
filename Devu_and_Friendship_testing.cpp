#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        std::vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(d[i]);
        }
        cout << s.size() << '\n';
    }
    return 0;
}
