// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll, ll> pi;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        // fun();
         ll n;
    cin >> n;

    cout<<"You have enter n is : "<<n<<endl;


    ll v[2005][2005];

    

    // vvl v(n, vl(n));
    ll d1[10005];
    ll d2[10005];

    // for(int i=0;i<10003;i++){
    //     d1[i]=d2[i]=0;
    // }

    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];

            d1[i + j] += v[i][j];
            d2[i - j + 2001] += v[i][j];
        }
    }

  pair<long long,long long>ans1,ans2;

    ll max1 = -1;
    ll max2 = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((i + j) % 2))
            {
                ll val1 = d1[i + j] + d2[i - j + 2001] - v[i][j];
                if (val1 > max1)
                {
                    max1 = val1;
                    ans1 = {i + 1, j + 1};
                }
            }
            else
            {
                ll val1 = d1[i + j] + d2[i - j + 2001] - v[i][j];
                if (val1 > max2)
                {
                    max2 = val1;
                    ans2 = {i + 1, j + 1};
                }
            }
        }
    }

    cout<<ans1.first<<" "<<ans1.second<<" "<<ans2.first<<" "<<ans2.second<<endl;

    
}