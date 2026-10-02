#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mn = a[0];
    int mx = a[0];
    int i;
    int st,st1;
    for (i = 0; i < n; i++)
    {
        if (a[i] <= mn)
        {
            mn = a[i];
            st = i;

        }
        if (a[i] >= mx)
        {
            mx = a[i];
            st1 = i;
        }
    }

   int count =0;
    for(int i = st;i<n-1;i++)
    {
        swap(a[i],a[i+1]);
        count++;

    }
      for (i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            st1 = i;
            break;
        }
    }
    for(int j = st1;j>=1;j--)
    {
        swap(a[j],a[j-1]);
        count++;
    }
    cout<<count<<endl;

    return 0;
}
