#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    if (N > 0 && (N & (N - 1)) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}