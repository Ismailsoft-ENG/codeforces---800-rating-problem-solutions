#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (p == q)
        {
            count += 0;
        }
        else if (q - p >= 2)
        {
            count++;
        }
        else
            count += 0;
    }
    cout << count << endl;

    return 0;
}
