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

    vl v(n);
    ll max1 = -1e18;
    ll min1 = 1e18;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll cnt = 0;

    for (auto &i : v)
    {
        if (i == 0)
            cnt++;
    }

    if (cnt == n)
    {
        cout << "NO" << endl;
        return;
    }
    cout<<"YES"<<endl;

    ll l = 0;
    ll h = n - 1;

    ll sum1 = 0;

    vector<ll> ans;

    for (ll i = 0; i < n; i++)
    {

        if (sum1 <= 0)
        {
            sum1 += v[h];

            ans.push_back(v[h]);

            h--;
        }
        else
        {

            sum1 += v[l];

            ans.push_back(v[l]);

            l++;
        }
    }

    for(auto &i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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