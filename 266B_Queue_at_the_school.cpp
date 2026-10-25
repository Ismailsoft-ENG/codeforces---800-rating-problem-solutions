#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    string S;
    cin>>S;
    vector<char>v;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='B'&&S[i+1]=='G')
        {
            v.push_back(S[i+1]);
        }
    }










}

 return 0;
}
