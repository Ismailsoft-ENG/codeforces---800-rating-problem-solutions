#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int counta = 0;
    int countd = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            counta++;
        }
        else
        {
            countd++;
        }
    }
    if (counta == countd)
    {
        cout << "Friendship" << endl;
    }
    else if (counta > countd)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}
