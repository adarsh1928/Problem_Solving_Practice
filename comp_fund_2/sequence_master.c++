// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n;
    cin >> n;

    vl v(2*n);

    ll sum1 = 0;
    ll max1 = 0;

    for (int i = 0; i < 2*n; i++)
    {
        cin >> v[i];
        sum1 += abs(v[i]);
    }
    sort(v.begin(), v.end());

    ll ans = sum1;
    ll sum2 = 0;

    if(n==1){
        cout<<abs(v[0]-v[1])<<endl;
        return;
    }

    if (n == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            sum2 += (abs(v[i] - 2));
        }

        ans = min(ans, sum2);
    }

    if ((2*n )% 4 == 0)
    {
        ll sum3 = 0;

        for (int i = 0; i < (2*n)-1; i++)
        {
            sum3 += abs(v[i] + 1);
        }
        sum3 += abs(v[2*n - 1] - (n));

        ans = min(ans, sum3);
    }

    cout << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        fun();
    }
}