// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int prime[1000009];
void fun1(int n)
{
    memset(prime, -1, sizeof(prime));
    prime[1] = 1;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == -1)
        {
            for (int i = p; i <= n; i += p)
                if (prime[i] == -1)
                    prime[i] = p;
        }
    }
}

void fun()
{

    ll n, m;
    cin >> n >> m;

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        if (prime[n] <= m)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    fun1(1000005);

    while (T--)
    {
        fun();
    }
}