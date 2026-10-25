#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
        cout << s << endl;
    }
    else if (count1 == count2)
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
        cout << s << endl;
    }
    else
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }

    return 0;
}
