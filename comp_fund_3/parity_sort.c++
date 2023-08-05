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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl odd, even;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
            odd.push_back(v[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    vl ans;

    ll cnto=0, cnte=0;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            ans.push_back(even[cnte]);
            cnte++;
        }
        else{
            ans.push_back(odd[cnto]);
            cnto++;
        }
    }
    if(!is_sorted(ans.begin(),ans.end())){
           cout<<"NO"<<endl;
           return;
    }
    cout<<"YES"<<endl;
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