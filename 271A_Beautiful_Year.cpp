#include <bits/stdc++.h>
using namespace std;
int main()
{
      int y;
      cin >> y;
      for (int m = 1; m <= 9000; m++)
      {
            y++;
            int num = y;
            vector<int> V;
            while (num != 0)
            {
                  int rem = num % 10;
                  V.push_back(rem);
                  num = num / 10;
            }
            int flag = 0;
            for (int i = 0; i < V.size(); i++)
            {
                  for (int j = i + 1; j < V.size(); j++)
                  {
                        if (V[i] == V[j])
                        {
                              flag = 1;
                              break;
                        }
                  }

                  if (flag == 1)
                  {
                        break;
                  }
            }
            if (flag == 0)
            {
                  cout << y << endl;
                  break;
            }
      }

      return 0;
}
