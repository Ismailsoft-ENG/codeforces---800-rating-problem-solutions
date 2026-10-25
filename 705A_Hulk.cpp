<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << "I hate";
        else
            cout << "I love";

        if (i != n)
            cout << " that ";
        else
            cout << " it";
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << "I hate";
        else
            cout << "I love";

        if (i != n)
            cout << " that ";
        else
            cout << " it";
    }

    return 0;
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
}