#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
              mp[s[i]]++;
        }
        for(auto x : mp)
        {
             if(x.first ==s[n-1])
             {
                 cout<<n- x.second<<endl;
                 break;
             }
        }

    }


 return 0;
}
