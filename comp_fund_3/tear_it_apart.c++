// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{
    string s;
    cin >> s;

    ll n = s.length();

    ll min1 = 1e6;

    for (int i = 0; i < 26; i++)
    {

        char ch = i + 'a';
        ll max1 = 0;

        ll last1 = -1;
        ll cnt=0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                cnt=0;
            }
            else {
                cnt++;
            }

            max1=max(max1,cnt);
        }

        ll cntt=0;
        while(max1>0){
            cntt++;
            max1=max1/2;
        }
        min1=min(min1,cntt);
    }

    cout << min1 << endl;
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