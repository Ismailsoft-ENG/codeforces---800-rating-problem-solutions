<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int pos;
   while( (pos = s.find("WUB"))!=string::npos)
   {
    s.replace(pos,3," ");
   }
   stringstream ss(s);
   string word;
while(ss>>word)
{
    cout<<word<<" ";
}

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int pos;
   while( (pos = s.find("WUB"))!=string::npos)
   {
    s.replace(pos,3," ");
   }
   stringstream ss(s);
   string word;
while(ss>>word)
{
    cout<<word<<" ";
}

    return 0;
}
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
