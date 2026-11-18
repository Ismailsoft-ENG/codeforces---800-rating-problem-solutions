#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int N;
    cin >> N;
    vector<int> v;
    for (int i = 1; i < N; i++)
    {
        if (i % 2 == 0)
            v.push_back(i);
    }
    int flag = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + v[i + 1] == N)
        {
            if (v[i] * 2 == v[i + 1])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
