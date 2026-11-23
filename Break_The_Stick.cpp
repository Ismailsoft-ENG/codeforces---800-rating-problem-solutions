
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int N, X;
        cin >> N >> X;

        if(X <= N && (N % 2 == 0 || X % 2 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
