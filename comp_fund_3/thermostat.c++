// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll l,r,x,a,b;

    cin >> l >> r >> x;

    cin >> a >> b;

    if (a == b)
    {
        cout << 0<<endl;
    }
    else if (a < b)
    {
        if (b - a >= x)
        {
            cout << 1<<endl;
        }
        else
        {
            if (a - l >= x)
            {
                cout << 2<<endl;
            }
            else if (r - b >= x)
            {
                cout << 2<<endl;
            }
            else if (r - a >= x && b - l >= x)
            {
                cout << 3<<endl;
            }
            else
            {
                cout << -1<<endl;
            }
        }
    }
    else
    {
        if (a - b >= x)
        {
            cout << 1<<endl;
        }
        else if (b - l >= x)
        {
            cout << 2<<endl;
        }
        else if (r - a >= x)
        {
            cout << 2<<endl;
        }
        else if (a - l >= x && r - b >= x)
        {
            cout << 3<<endl;
        }
        else
        {
            cout << -1<<endl;
        }
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