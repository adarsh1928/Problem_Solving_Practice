// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    long long sum = 0;
    for (int i = -1; i < n; i++)
    {
        long long curr = sum;
        for (int j = i + 1; j < min(n, i + 32); j++)
        {
            int tempp = a[j];
            tempp >>= j - i;
            curr += tempp;
        }
        ans = max(ans, curr);
        if (i + 1 != n)
        {
            sum += a[i + 1] - k;
        }
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