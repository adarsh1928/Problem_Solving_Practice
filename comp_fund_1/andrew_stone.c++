#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long  T;
    cin >> T;
    while (T--)
    {
        long long  n;
        cin >> n;

        vector<long long > v;
        long long  ff=0;

        for (long long  i = 0; i < n; i++)
        {

            long long  x;
            cin >> x;

            v.push_back(x);
            if(i!=0 && i!=n-1 && x!=1){
                ff++;
            }
        }
        if (n == 3 && v[1] % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if(n==3 && v[1]%2==0){
            cout<<v[1]/2<<endl;
        }
        else
        {
            long long  f = 0;
            long long  cnt = 0;
            long long  cnt2 = 0;
            long long  ans = 0;
            for (long long  i = 1; i < n - 1; i++)
            {
                
                
                
                    if (v[i] % 2 != 0)
                    {
                        cnt++;
                        ans += ((v[i] + 1) / 2);
                    }
                    else
                    {
                        cnt2++;
                        ans += (v[i] / 2);
                    }
                
            }
          
            if (f == 1  || ff==0)
                cout << "-1" << endl;
            else
                cout << ans << endl;
        }
    }
}