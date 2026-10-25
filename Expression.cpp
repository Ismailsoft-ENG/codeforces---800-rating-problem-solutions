#include<bits/stdc++.h>
using namespace std;
int main()
{

 int a,b,c;
 cin>>a>>b>>c;
 int ans = a+(b*c);
 int ans2 = b+ (a*c);
 int ans3 = c+(a*b);
 int ans4 = (a+b)*c;
 int ans5 = a+b+c;
 int ans6 = (b+c)*a;
 int mul = a*b*c;
 int mx = max(max(ans,ans2),max(ans3,ans4));
 int m = max(max(ans6,ans5),mul);
 int final_mx = max(mx,m);
 cout<<final_mx<<endl;

 return 0;
}
