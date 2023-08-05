#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {

    int n;
    cin >> n;
       
       string temp;
       cin>>temp;

    int n1 = n;
    string t = "";
    int f = 0;


    for (int i = 0; i < temp.size(); i++)
    {
      t += char('9' - temp[i] + '0');
    }
    int sz1 = temp.size();
    if (temp[0] == '9')
    {
      t[sz1 - 1] += 1;
      for (int i = sz1 - 1; i >= 0; i--)
      {
        t[i] += 1;
        if (t[i] > '9')
        {
          t[i] -= 10;
          t[i - 1] += 1;
        }
      }
    }
    cout << t << endl;
  }
}
