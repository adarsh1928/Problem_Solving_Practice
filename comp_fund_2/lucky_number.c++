// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funn(int n)
{
    string s = to_string(n);

    ll min1 = 10;
    ll max1 = -1;

    for (int i = 0; i < s.length(); i++)
    {
        ll num = (s[i] - '0');
        min1 = min(min1, num);
        max1 = max(max1, num);
    }

    return max1 - min1;
}

void fun()
{

    ll l, r;
    cin >> l >> r;

    ll ans = r;
    ll max1 = 0;

    int n1 = r;

    while (1)
    {

        if ((n1 < l) || (max1 == 9))
        {
            break;
        }

        ll val = funn(n1);
        
        if (max1 < val)
        {
            ans = n1;
            max1 = val;
        }
        n1--;
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