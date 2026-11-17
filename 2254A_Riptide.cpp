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
        int a, b, c;
        cin >> a >> b >> c;
        int ans1 = abs(a-b);
        int ans2 =abs(a-c);
        int ans3 =abs(b-c);
        int mn = min(ans1,min(ans2,ans3));
        cout<<mn<<endl;
      
    }
    return 0;
}
