<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    vector<char>v;
    int sz = s.size()/2;
    for(int i=0;i<sz;i++)
    {
        v.push_back(s[i]);
    }
    map<char,int>mp;
    vector<char>v1;
    for(int k=0;k<sz;k++)
    {
        mp[s[k]]++;
    }
    int count = 0;
    for(auto x : mp)
    {
      v1.push_back(x.first);
      if(x.second >=2)
      {
        count++;
      }
    }
    if(mp.size()>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    vector<char>v;
    int sz = s.size()/2;
    for(int i=0;i<sz;i++)
    {
        v.push_back(s[i]);
    }
    map<char,int>mp;
    vector<char>v1;
    for(int k=0;k<sz;k++)
    {
        mp[s[k]]++;
    }
    int count = 0;
    for(auto x : mp)
    {
      v1.push_back(x.first);
      if(x.second >=2)
      {
        count++;
      }
    }
    if(mp.size()>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 return 0;
}
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
