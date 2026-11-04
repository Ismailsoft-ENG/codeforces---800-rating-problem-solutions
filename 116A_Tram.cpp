#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
     int store  = 0;
     int mx =0;
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin>>a>>b;
        store = store - a;
        store += b;
        mx = max(mx,store);
    }   
   cout<<mx<<endl;
    return 0;
}
