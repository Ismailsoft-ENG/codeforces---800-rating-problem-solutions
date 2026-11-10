#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int>v;
        v.push_back(x);
        v.push_back(y);
        sort(v.begin(),v.end());
        for(auto x: v)
        {
             cout<<x<<" ";
        }
        cout<<endl;
    }
    

 return 0;
}
