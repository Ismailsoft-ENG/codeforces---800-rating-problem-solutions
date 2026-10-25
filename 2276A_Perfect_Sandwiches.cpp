<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a <= b) cout << -1 <<endl;
        else cout << min(b, a - b) << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a <= b) cout << -1 <<endl;
        else cout << min(b, a - b) << endl;
    }
    return 0;
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
}