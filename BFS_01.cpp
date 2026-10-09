#include <bits/stdc++.h>
using namespace std;
int N, E;
vector<int> adj_list[10001];
int main()
{
    cin >> N >> E;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    int Q;
    cin>>Q;
    while (Q--)
    {
    int A,B;
    cin>>A>>B;
    if(A==B)
    {
        cout<<"YES"<<endl;
        continue;
    }
    bool flag = false;
    for(int m : adj_list[A])
    {
        if(m==B)
        {
            flag = true;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }

    return 0;
}
