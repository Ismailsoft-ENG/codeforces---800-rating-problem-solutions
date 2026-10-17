#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        v1.push_back(x);
        v2.push_back(y);
        v3.push_back(z);
    }
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int a : v1)
    {
        sum1 = sum1 + a;
    }
    cout << endl;
    for (int a : v2)
    {
        sum2 = sum2 + a;
    }
    cout << endl;
    for (int a : v3)
    {
        sum3 = sum3 + a;
    }
    if (sum1 == 0)
    {
        if (sum2 == 0)
        {
            if (sum3 == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}
