<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    int i = 0;
    int j = n - 1;
    bool flag = false;
    vector<int> v;
    vector<int> v1;
    int sum = 0;
    int sum1 = 0;
    while (i <= j)
    {
        if (a[i] < a[j])
        {
            if (flag == false)
            {
                v.push_back(a[j]);
            }
            else
                v1.push_back(a[j]);

            j--;
        }
        else
        {
            if (flag == false)
            {
                v.push_back(a[i]);
            }
            else
                v1.push_back(a[i]);
            i++;
        }
        if (flag == false)
        {
            flag = true;
        }
        else
            flag = false;
    }

    for (int x : v)
    {
        sum += x;
    }
    for (int y : v1)
    {
        sum1 += y;
    }

    cout << sum << " " << sum1 << endl;

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    int i = 0;
    int j = n - 1;
    bool flag = false;
    vector<int> v;
    vector<int> v1;
    int sum = 0;
    int sum1 = 0;
    while (i <= j)
    {
        if (a[i] < a[j])
        {
            if (flag == false)
            {
                v.push_back(a[j]);
            }
            else
                v1.push_back(a[j]);

            j--;
        }
        else
        {
            if (flag == false)
            {
                v.push_back(a[i]);
            }
            else
                v1.push_back(a[i]);
            i++;
        }
        if (flag == false)
        {
            flag = true;
        }
        else
            flag = false;
    }

    for (int x : v)
    {
        sum += x;
    }
    for (int y : v1)
    {
        sum1 += y;
    }

    cout << sum << " " << sum1 << endl;

    return 0;
}
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
