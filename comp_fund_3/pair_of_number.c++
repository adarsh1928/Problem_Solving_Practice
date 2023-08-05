// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

// int v[300010], ans[300010], n, max1 = -1, c, i;

void fun()
{

    ll n;
    cin >> n;

    vl v(n+5);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max1=-1;

    int i;
    int itr;

    vl ans(n+5);

for(i = 0; i < n;) {
       
       
        int l = i, r = i;
    
    
        while(l && v[l-1] % v[i] == 0)
        {

            l--;
        }
    
    
       while(r < n-1 && v[r+1] % v[i] == 0)
       {

            r++;
       }
        
        i = r + 1;
       
        if(r - l > max1)
        {

            max1 = r - l;
             itr = 0;
             ans[itr] = l + 1;
        }
             else if(r - l == max1)
             {

            ans[++itr] = l + 1;
             }
    }
   
    cout << itr + 1 << " " << max1 << endl;
   
    for(i = 0; i <= itr; i++)
    {

        cout << ans[i] << " ";
    }


}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}