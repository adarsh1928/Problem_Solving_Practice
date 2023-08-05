// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll cost(string s)
{

    ll ans = 0;

    string s1 = s;

    char ch = s1[s.length() - 1];

    for (ll i = s.length() - 2; i >= 0; i--)
    {
        if (ch < s1[i])
        {
            ch = s1[i];
        }
        else
            s1[i] = ch;
    }

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] >= s1[i])
        {
            if (s[i] == 'A')
            {
                ans += 1;
            }
            if (s[i] == 'B')
            {
                ans += 10;
            }
            if (s[i] == 'C')
            {
                ans += 100;
            }
            if (s[i] == 'D')
            {
                ans += 1000;
            }
            if (s[i] == 'E')
            {
                ans += 10000;
            }
        }
        else
        {
            if (s[i] == 'A')
            {
                ans -= 1;
            }
            if (s[i] == 'B')
            {
                ans -= 10;
            }
            if (s[i] == 'C')
            {
                ans -= 100;
            }
            if (s[i] == 'D')
            {
                ans -= 1000;
            }
            if (s[i] == 'E')
            {
                ans -= 10000;
            }
        }
        return ans;
    }
}

ll fun1(string s, char ch1, char ch2)
{
    string s1 = s;
    string s2 = s;

    ll first = -1;
    ll last = -1;

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == ch1 && first == -1)
            first = i;
        if (s[i] == ch1)
            last = i;
    }

    if (first == -1)
    {
        return 0;
    }
    else
    {
        s1[first] = ch2;
        s2[last] = ch2;
        
        ll max1 = cost(s1);
        max1 = max(max1, cost(s2));
        return max1;
    }
}

void fun()
{

    string s;
    cin >> s;

    ll n = s.length();

    ll ans = 0;
    ll max1 = 0;

    // for (char ch = 'A'; ch <= 'E'; ch++)
    // {
    //     for (char ch1 = 'A'; ch1 <= 'E'; ch1++)
    //     {
    //         ll val = fun1(s, ch, ch1);
    //         ans=max(ans,val);
    //     }
    // }
    max1 = max(max1, fun1(s, 'A', 'B'));
    max1 = max(max1, fun1(s, 'A', 'C'));
    max1 = max(max1, fun1(s, 'A', 'D'));
    max1 = max(max1, fun1(s, 'A', 'E'));
    max1 = max(max1, fun1(s, 'B', 'A'));
    max1 = max(max1, fun1(s, 'B', 'C'));
    max1 = max(max1, fun1(s, 'B', 'D'));
    max1 = max(max1, fun1(s, 'B', 'E'));
    max1 = max(max1, fun1(s, 'C', 'B'));
    max1 = max(max1, fun1(s, 'C', 'A'));
    max1 = max(max1, fun1(s, 'C', 'D'));
    max1 = max(max1, fun1(s, 'C', 'E'));
    max1 = max(max1, fun1(s, 'D', 'B'));
    max1 = max(max1, fun1(s, 'D', 'A'));
    max1 = max(max1, fun1(s, 'D', 'C'));
    max1 = max(max1, fun1(s, 'D', 'E'));
    max1 = max(max1, fun1(s, 'E', 'B'));
    max1 = max(max1, fun1(s, 'E', 'A'));
    max1 = max(max1, fun1(s, 'E', 'C'));
    max1 = max(max1, fun1(s, 'E', 'D'));

    ans = max1;
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