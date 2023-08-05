

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;


ll funn(vector<ll> &arr, ll n, ll k)
{
   
    ll l = *max_element(arr.begin(), arr.end()), h = 0;

    for (ll i = 0; i < n; i++)
    {
        h += arr[i];
    }

    while (l <= h)
    {
        ll mid = (l + h) / 2;

        ll f = 0;

        ll tempp = 0, cntt = 1;

        for (ll i = 0; i < arr.size(); i++)
        {
           
            if (tempp + arr[i] > mid)
            {
                tempp = arr[i];
                cntt++;
            }
            else
            {
                tempp += arr[i];
            }
        }

        if (cntt <= k)
        {
            f=1;
        }

        if (f == 1)
        {
            h = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    return l;
}

void fun()
{

    ll n;
    cin >> n;


    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll p;
    cin>>p;
    
    if (n < p)
    {
        cout << -1 << endl;
        return;
    }

    ll val = funn(v, n, p);

    cout << val << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}