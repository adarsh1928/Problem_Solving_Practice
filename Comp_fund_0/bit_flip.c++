#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    vector<int> v(n, 0);

    if (k == 0)
    {
      cout << s << endl;
      for (int i = 0; i < n; i++)
      {
        cout << "0"
             << " ";
      }
      cout << endl;
    }
    else if (k % 2 != 0)
    {
      for (int i = 0; i < n; i++)
      {
        if (s[i] == '1')
        {
          k--;
          v[i] = 1;
          if (k == 0)
          {
            for (int j = i + 1; j < n; j++)
            {
              if (s[j] == '0')
                s[j] = '1';
              else
                s[j] = '0';
            }
            break;
          }
        }
        else
        {
          s[i] = '1';
        }
      }

      if (k % 2 != 0)
      {
        s[n - 1] = '0';
        if (v[n - 1] == 1)
          v[n - 1] = 0, k++;
        else
          v[n - 1] = 1, k--;

      }
          v[0]+=k;

           cout << s << endl;
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
    }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        k--;
        v[i] = 1;
        s[i]='1';
        if(k==0) break;
      }
    }
    if(k%2!=0){
             s[n-1]='0';
             if(v[n-1]==1) v[n-1]=0,k++;
             else v[n-1]=1,k--;
    }
    v[0]+=k;

     cout << s << endl;
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  }

 
}
}