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
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 2 << " " << (n - 3) << " " << 1 << endl;
    }
    else
    {
        for (int i = 3; i < n; i++)
        {
            if (__gcd(i, n - i - 1) == 1)
            {
                cout << i << " " << n - i - 1 << " " << 1 << endl;
                break;
            }
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