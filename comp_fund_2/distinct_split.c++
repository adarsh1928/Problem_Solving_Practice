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

    vector<int> freq(26, 0);

    vector<int> freq1(26, 0);
    int cnt = 0;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    int ans = 0;

    for (auto &i : s)
    {
        freq[i - 'a']--;
        freq1[i - 'a']++;

        int sum1=0;

        for(int j=0;j<26;j++){
             sum1+=min(1,freq[j])+min(1,freq1[j]);
        }
        ans=max(ans,sum1);
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