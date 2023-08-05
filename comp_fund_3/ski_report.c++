// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int fun1(ll cnt, ll k)
{

    ll temp1 = 0;
    if (cnt == 0 || k > cnt)
        return 0;

    temp1 = cnt - k + 1;
    ll k1 = k + 1;

    while (k1 != cnt + 1)
    {
        temp1 += (cnt - k1 + 1);
        k1++;
    }
    return temp1;
}

void fun()
{

    ll n, k, q;
    cin >> n >> k >> q;

    vl v(n);

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll val = 0;

    vl temp;


    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= q)
            cnt++;

        else
        {
            temp.push_back(cnt);

            cnt = 0;
        }
    }

    temp.push_back(cnt);

    for(ll i=0;i<temp.size();i++){

       if(temp[i]<k) continue;

       temp[i]-=k;

       ll cntt=temp[i]+1;

       val+=(cntt*(cntt+1))/2;

    }

    cout << val << endl;
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