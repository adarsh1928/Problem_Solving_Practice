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

    if (n == 3)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            cout << 1 << " " << -1 << " ";
        }
        cout << endl;
    }
    else{
       for (int i = 0; i < (n/2); i ++)
        {
            cout << ((n/2)-1) << " " << -(n/2) << " ";
        }
        cout<<((n/2)-1);
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