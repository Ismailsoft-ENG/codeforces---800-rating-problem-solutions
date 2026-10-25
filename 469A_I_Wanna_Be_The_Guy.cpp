#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a;
    vector<int> v;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int val;
    int q;
    cin >> q;
    vector<int> v1;
    for (int j = 0; j < q; j++)
    {
        cin >> val;
        v1.push_back(val);
    }
    int flag = 0;
    for (int m = 1; m <= n; m++)
    {
        int fd = m;
        auto it = find(v.begin(), v.end(), fd);
        auto it1 = find(v1.begin(), v1.end(), fd);
        if (it == v.end() && it1 == v1.end())
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
