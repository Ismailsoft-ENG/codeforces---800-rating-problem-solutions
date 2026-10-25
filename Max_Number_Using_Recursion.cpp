#include<bits/stdc++.h>
using namespace std;
int fun(int A[],int N,int i)
{

    if(i==N-1)
    {
        return A[i];
    }
    int ans = fun(A,N,i+1);
    return max(A[i],ans);
}
int main()
{
 int N;
 cin>>N;
 int A[N];
 for(int i=0;i<N;i++)
 {
    cin>>A[i];
 }
 cout<<fun(A,N,0);

 return 0;
}
