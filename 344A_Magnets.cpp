#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> V;

    string s;

    for (int j = 0; j < n; j++)
    {
        cin >> s;
        V.push_back(s);
    }

    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (V[i] != V[i - 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}