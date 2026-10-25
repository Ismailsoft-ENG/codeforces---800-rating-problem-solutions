#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    long long ans;
    long long sum = 0;
    for (long long i = 1; i <= w; i++)
    {
        ans = k * i;
        sum += ans;
    }
    long long sub;
    if (sum > n)
    {
        sub = sum - n;
        cout << sub << endl;
    }
    else
    {
        sub = 0;
        cout << sub << endl;
    }
    return 0;
}
