#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int P[n];
for(int i=0;i<n;i++)
{
    cin>>P[i];
}
double sum = 0;
for(int i=0;i<n;i++)
{
    sum = sum + P[i];
}
double avg = sum / n;
cout<<fixed<<setprecision(12)<<avg<<endl;




 return 0;
}
