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
    ll max1 = 0;

    vl freq(105, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            freq[0]++;
        }
        else
        {
            int f = 0;
            for (int j = v[i] - 1; j >= 0; j--)
            {
                if (freq[j] > 0)
                {
                    freq[j]--;
                    freq[j + 1]++;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                freq[0]++;
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i <= 100; i++)
    {
        ans += freq[i];
    }
    cout << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}