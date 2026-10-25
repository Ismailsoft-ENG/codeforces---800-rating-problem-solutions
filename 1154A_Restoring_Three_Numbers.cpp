<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    vector<int> v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);
    vector<int> v2;
    int mx = max(max(x1, x2), max(x3, x4));
    for (int i = 0; i < v.size(); i++)
    {

        if (mx != v[i])
        {
            v2.push_back(v[i]);
        }
    }
    vector<int> v3;
    for (int i = 0; i < v2.size(); i++)
    {
        v3.push_back(mx - v2[i]);
    }
    for (auto x : v3)
    {
        cout << x << " ";
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    vector<int> v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);
    vector<int> v2;
    int mx = max(max(x1, x2), max(x3, x4));
    for (int i = 0; i < v.size(); i++)
    {

        if (mx != v[i])
        {
            v2.push_back(v[i]);
        }
    }
    vector<int> v3;
    for (int i = 0; i < v2.size(); i++)
    {
        v3.push_back(mx - v2[i]);
    }
    for (auto x : v3)
    {
        cout << x << " ";
    }

    return 0;
}
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
