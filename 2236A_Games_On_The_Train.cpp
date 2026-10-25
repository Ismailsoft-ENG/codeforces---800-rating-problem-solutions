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
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int mx = *max_element(h.begin(),h.end());
        int mn = *min_element(h.begin(),h.end());
        int k = mx-mn+1;
        cout<<k<<endl;
    }

    return 0;
}
