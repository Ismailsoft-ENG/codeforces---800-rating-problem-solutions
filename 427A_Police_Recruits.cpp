#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int val;
    cin>>val;
    v.push_back(val);
}
int count = 0;
for(int i=0;i<v.size();i++)
{
    if(v[i]==-1)
    {
        if(v[i+1]==1)
        {
          count ++;
        }
    }
}













 return 0;
}
