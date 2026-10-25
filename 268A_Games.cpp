#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h, a;
    vector<int> v;
    vector<int> v1;
    for (int i = 1; i <= n; i++)
    {
        cin >> h >> a;
        v.push_back(h);
        v1.push_back(a);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && v1[i] == v[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
