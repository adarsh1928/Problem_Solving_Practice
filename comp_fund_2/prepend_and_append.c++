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

    string s;
    cin >> s;

    int i = 0;
    int cnt = 0;
    int j = n - 1;

    while (i < j)
    {
        if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
        {
            i++;
            j--;

            cnt += 2;
        }
        else{
            break;
        }
    }
    cout << (n - cnt) << endl;
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