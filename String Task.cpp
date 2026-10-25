#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char>V;
    for(char c : s)
    {
        c = tolower(c);
        V.push_back(c);
    }
    for (int i = 0; i < V.size(); i++)
    {
        if(V[i]!='a'&&V[i]!='e'&& V[i]!='i'&& V[i]!='o'&& V[i]!='u'&& V[i]!='y')
        {
            cout<<"."<<V[i];
        }
        
        
    }


    return 0;
}
