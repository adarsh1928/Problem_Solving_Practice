// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, s, r;
    cin >> n >> s >> r;

    vl ans;
    ll val1 = s - r;
    ans.push_back(val1);

    ll div = r / (n - 1);
    ll rem = r % (n - 1);

    for (int i = 0; i < n-1; i++)
    {
        if (rem > 0)
        {
            rem--;
            ans.push_back(div + 1);
        }
        else
            ans.push_back(div);
    }

    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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