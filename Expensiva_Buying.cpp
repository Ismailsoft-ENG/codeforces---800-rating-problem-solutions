#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	while(T--)
	{
	     int K,N;
	     cin>>N>>K;
	     std::vector<int>C(N) ;
	     for(int i=0;i<N;i++)
	     {
	          cin>>C[i];
	     }
	     sort(C.begin(),C.end(),greater<int>());
	     int sum = 0;
	     for(int i=0;i<K;i++)
	     {
	          sum += C[i];
	     }
	     cout<<sum<<endl;
	     
	}
return 0;
}
