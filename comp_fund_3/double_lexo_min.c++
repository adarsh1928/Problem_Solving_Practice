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

    int n = s.length();

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        ans += '#';
    }
    // cout<<ans<<endl;

    sort(s.begin(), s.end());

    ll l = 0;
    ll h = n - 1;

    for (ll i = 0; i < n; i += 2)
    {
        if (i == n - 1)
        {
            ans[l] = s[i];
        }
        else if (s[i] == s[i + 1])
        {
            ans[h] = s[i];
            ans[l] = s[i + 1];

            h--;
            l++;
        }
        else if (i == n - 2)
        {
            ans[h] = s[i];
            ans[l] = s[i + 1];

            h--;
            l++;
        }
        else if(s[i+1]==s[n-1]){
            swap(s[i],s[i+2]);
            i-=2;
        }
        else{
            ans[h]=s[i];
            h--;

            for(ll j=i+1;j<n;j++){
                ans[l]=s[j];
                l++;
            }

            break;
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