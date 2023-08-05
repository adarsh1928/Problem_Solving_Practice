// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funn(vl &v)
{

    vl temp(v.size());

    for (auto &i : v)
    {
        if (i < v.size())
        {
            temp[i]++;
        }
    }
    ll ans = 0;

    while (ans < v.size() && temp[ans])
    {
        ans++;
    }

    return ans;
}

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = funn(v);

    if (ans == n)
    {
        cout << "NO" << endl;
        return;
    }

    vl anss;



    if (find(v.begin(), v.end(), ans + 1) != v.end())
    {
        for (ll i = 0; i < n; i++)
        {
           if(v[i]==ans+1) anss.push_back(i);
        }

      
        for (ll i = anss.front(); i <= anss.back(); i++)
        {
            v[i] = ans;
        }

        ll vall = funn(v);

        if (vall == (ans + 1))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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