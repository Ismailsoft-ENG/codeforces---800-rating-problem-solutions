#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long res1 = abs (a-b);
        long long res = abs((a+c)-b);
        long long ans = max(res,res1);
        cout<<ans<<endl;
    }

    return 0;
}
