#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>v;
int count =0;
int count1 =0;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    if(v[i]==0)
    {
        count++;
    }
    else 
    count1++;
}
if(count == n)cout<<"EASY"<<endl;
else cout<<"Hard"<<endl;


 return 0;
}
