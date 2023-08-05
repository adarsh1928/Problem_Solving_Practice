// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n - 1;
    bool f1 = 0, res = 1, f2 = 0;
    while (l <= r)
    {
        if (s[l] != s[r] && !f1)
            f1 = 1;
        else if (s[l] == s[r] && f1)
        {
            f2 = 1;
        }
        else if (s[l] != s[r] && f2)
        {
            res = 0;
            break;
        }
        l++, r--;
    }
    if (res)
    {
        cout << "YES" << endl;
    }
    else
        cout << "No" << endl;
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