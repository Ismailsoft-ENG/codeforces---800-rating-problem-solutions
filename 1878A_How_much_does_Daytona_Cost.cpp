#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        auto it = find(a.begin(), a.end(), k);
        if (it == a.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            for(auto x : mp)
            {
                if(x.first == k)
                {
                    if(x.second>=1)
                    {
                        cout<<"YES"<<endl;
                    }
                }
            }
        }
    }

    return 0;
}
