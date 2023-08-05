// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll fun1(vl &v)
{

    ll max1 = 0;

    for (ll i = 0; i < v.size();)
    {
        if(v[i]==0) {
            i++;
            continue;
        }
        ll j = i + 1;
        while (j < v.size() && v[j] != 0)
        {
            j++;
        }
        max1 = max(max1, j - i);
        i = j;
    }
    return max1;
}

void fun()
{

    ll n;
    cin >> n;

    vl v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vl v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    ll val1 = fun1(v1);
    ll val2 = fun1(v2);

    if (val1 > val2)
    {
        cout << "OM" << endl;
    }
    else if (val1 < val2)
    {
        cout << "ADDY" << endl;
    }
    else
        cout << "DRAW" << endl;
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