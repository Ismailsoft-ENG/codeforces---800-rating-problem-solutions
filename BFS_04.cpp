
#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];

int N, M;
int flag;

vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;

    q.push({si, sj});
    vis[si][sj] = true;
    flag = 1;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + mv[i].first;
            int cj = par_j + mv[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                flag++;
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                bfs(i, j);
                v.push_back(flag);
            }
        }
    }

    sort(v.begin(), v.end());
    if (v.size() == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {

            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
