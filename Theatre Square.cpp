#include <bits/stdc++.h>
using namespace std;
int main()
{

  long long n, m;
  cin >> n >> m;
  long long a;
  cin >> a;
  long long l;
  long long w;
  if (n % a == 0)
  {
    l = n / a;
  }
  else
  {
    l = n / a + 1;
  }
  if (m % a == 0)
  {
    w = m / a;
  }
  else
  {
    w = m / a + 1;
  }
  cout<<l*w<<endl;

  return 0;
}
