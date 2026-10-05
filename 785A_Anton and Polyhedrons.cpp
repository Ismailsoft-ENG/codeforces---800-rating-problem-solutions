#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int score = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
        {
            score += 20;
        }
        else if (s == "Cube")
        {
            score += 6;
        }
        else if (s == "Tetrahedron")
        {
            score += 4;
        }
        else if (s == "Dodecahedron")
        {
            score += 12;
        }
        else
            score += 8;
    }
    cout << score << endl;
    return 0;
}
