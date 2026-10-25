#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, s1;
    cin >> s >> s1;
    for(char &c : s)
    {
        c = tolower(c);
    }
     for(char &x : s1)
    {
        x = tolower(x);
    }
    if (s == s1)
    {
        cout << "0" << endl;
    }
    else if (s < s1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    return 0;
}
