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

    ll in1 = -1;
    ll in2 = -1;

    for (ll i = n - 1; i >= 1; i--)
    {

        ll sum1 = ((s[i] - '0') + (s[i - 1] - '0'));

        if (sum1 >= 10 && in1 == -1)
        {
            in1 = i;
        }

        if (s[i] >= s[i - 1])
        {
            in2 = i;
        }
    }

    if (in1 == -1)
    {
        cout<<((s[0]-'0')+(s[1]-'0'));

        for(ll i=2;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }

    else
    {

        for (ll i = 0; i < in1 - 1; i++)
        {
            cout << s[i];
        }
        ll temp = ((s[in1] - '0') + (s[in1 - 1] - '0'));

        cout << temp;

        for (ll i = in1 + 1; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
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