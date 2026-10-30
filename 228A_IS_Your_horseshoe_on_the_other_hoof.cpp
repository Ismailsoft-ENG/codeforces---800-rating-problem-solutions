#include<bits/stdc++.h>
using namespace std;
int main()
{
int s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
vector<int>v;
v.push_back(s1);
v.push_back(s2);
v.push_back(s3);
v.push_back(s4);
map<int,int>mp;
for(int i=0;i<v.size();i++)
{
    mp[v[i]]++;
}
cout<<v.size()-mp.size()<<endl;


 return 0;
}
