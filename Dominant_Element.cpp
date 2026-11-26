#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            mp[A[i]]++;
        }
        int mx = 0;
        int count = 0;
        for (auto x : mp)
        {
            if (x.second > mx)
            {
                mx = x.second;
                count = 1;
            }
            else if (x.second == mx)
            {
                count++;
            }
        }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}