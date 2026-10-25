#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long sum = 0;
    long long count = 0;
    long long start = 0;
    long long end = N;
  while(start<=end)
  {
    long long mid = start+(end-start)/2;
    long long sum = mid*(mid+1)/2;
    if(sum<=N)
    {
        count = mid;
        start = mid+1;
    }
    else end = mid -1;
  }
  cout<<count<<endl;

    return 0;
}
