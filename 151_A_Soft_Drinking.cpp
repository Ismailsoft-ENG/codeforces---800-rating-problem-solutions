
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ans = (k*l)/nl;
    int ans1 = c*d;
    int ans2 = p/np;

    int mn = min(min(ans,ans1),ans2);

    cout<<mn/n<<endl;

    return 0;
}
