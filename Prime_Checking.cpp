#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int N;
cin>>N;
int flag = 0;
for(long long int i=2;i<N;i++)
{
    if(i%2==0)
    {
        flag = 1;
        break;
    }
}
if(flag ==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

 return 0;
}
