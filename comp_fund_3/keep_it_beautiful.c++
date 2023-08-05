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
    string s = "";
    ll f = 0;

    ll prev = -1;

    for (ll i = 0; i < n; i++)
    {

        //    cout<<v[i]<<"  "<<prev<<" "<<f<<endl;
        ll f3 = 0;

        if (i == 0)
        {
            s += "1";
            prev = v[0];
        }
        else
        {
            if (v[i] <= v[0] && prev > v[i] && f == 0)
            {
                s += "1";
                f = 1;
                prev = v[i];

                f3++;
            }
            if (f == 0 && prev <= v[i] && v[i] >= v[0])
            {
                prev = v[i];
                s += "1";

                f3++;
            }
            if (f3 == 0)
            {
                if (v[i] >= prev)
                {
                    if (v[0] >= v[i])
                    {
                        if (f == 1)
                        {
                            s += "1";
                            prev = v[i];
                        }
                        else
                            s += "0";
                    }
                    else
                        s += "0";
                }
                else
                    s += "0";
            }
        }
    }
        cout << s << endl;
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