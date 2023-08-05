// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

string s = "31415926535897932384626433832795";

void fun()
{

    int t, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long ans = 1;
        for (int j = 0; j < s[i] - '0'; j++)
        {
            cin >> b;
            ans *= b;
        }
        cout << ans << endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        fun();
    
}