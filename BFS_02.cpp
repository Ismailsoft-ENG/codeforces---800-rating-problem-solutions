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
        adj_list[b].push_back(a);
    }
    int Q;
    cin>>Q;
    while (Q--)
    {
    int X;
    cin>>X;
    vector<int>v;
    for(int m : adj_list[X])
    {
         v.push_back(m);
    }
    if(v.size() == 0)
    {
       cout<<"-1"<<endl;
    }
    else 
    {
        sort(v.begin(),v.end(),greater<int>());
        for(int x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    }

    return 0;
}
