<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        cout << min(a[n - 1] - a[1],a[n - 2] - a[0])
             << endl;
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        cout << min(a[n - 1] - a[1],a[n - 2] - a[0])
             << endl;
    }

    return 0;
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
}