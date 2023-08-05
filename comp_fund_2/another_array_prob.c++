// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    vl prefix(n);
    ll minin = -1;
    ll maxin = -1;

    ll max1 = 0;
    ll min1 = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            prefix[i] = v[i];
        else
            prefix[i] = prefix[i - 1] + v[i];

        if (v[i] > max1)
        {
            max1 = v[i];
            maxin = i;
        }
        if (v[i] < min1)
        {
            min1 = v[i];
            minin = i;
        }
    }
    ll sum1 = prefix[n - 1];
    ll ans=sum1;
    if(n>3){
        ans=max(ans,n*max1);
    }
     else if (n == 3)
		{
			ll x = v[0], y = v[1], z = v[2];
			ans = max(ans, 3 * z);
			ans = max(ans, 3 * (y-x));
			ans = max(ans, 3 * (y-z));
			ans = max(ans, 3 * x);
			ans = max(ans, x + 2 * y - 2 * z);
			ans = max(ans, z + 2 * y - 2 * x);
		}
		else if (n == 2)
		{
			ans = max(ans, (abs(v[0] - v[1]))*2);
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