// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;
#define pp pair<ll, ll>

void fun()
{

    ll n, m;
    cin >> n >> m;

    vl v(n);
    queue<pp> q;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        q.push({v[i],i});
    }


    // q.push({v[0], 0});
    ll ans;

    while (q.size()>0)
    {

        ll val = q.front().first;
        ll in = q.front().second;

            ans = in + 1;
        if (val <= m)
        {
            q.pop();
        }
        else
        {
            q.pop();
            val = val - m;
            q.push({val,in});
        }
    }

    cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}