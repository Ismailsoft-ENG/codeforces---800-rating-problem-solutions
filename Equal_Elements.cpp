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
        vector<int> v1;
        vector<int> v2;
        for (auto x : mp)
        {
            if (x.second > 1)
            {
                v1.push_back(x.second);
            }
            else
                v2.push_back(x.first);
        }
        if (v2.size() == A.size())
            cout << A.size() - 1 << endl;
        else
        {
            int mx = *max_element(v1.begin(), v1.end());
            int sz = A.size() - mx;
            cout << sz << endl;
        }
    }

    return 0;
}
