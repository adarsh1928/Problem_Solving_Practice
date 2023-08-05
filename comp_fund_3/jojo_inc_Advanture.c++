// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

// void funn()
// {

//     string s;
//     ll max1;
//     ll n;
//     ll i;
//     ll j = i + 1;

//     while (j < n && s[j] == '1')
//     {
//         j++;
//     }

//     max1 = max(max1, (j - i));
//     i = j;

//     while (i < n && s[i] == '1')
//     {
//         i++;
//     }

//     if (i == n)
//     {
//         max1 = n;
//     }
//     else
//     {
//         ll j = n - 1;

//         while (j >= 0 && s[j] == '1')
//         {
//             j--;
//         }
//         max1 = max(max1, ((n - j - 1) + (i)));
//     }

//     ll max2 = (max1 - 1) * (max1 / 2);

//     ll ans = max(max1, max2);
//     // ll max2;
//     if ((max1 % 2) == 0)
//     {
//         max2 = (max1) / 2;
//         ll ans = (max2) * (max2 + 1);
//         cout << ans << endl;
//     }
//     else
//     {
//         max2 = (max1 + 1) / 2;
//         ll ans = (max2) * (max2);
//         cout << ans << endl;
//     }
// }

void fun()
{

    string s;
    cin >> s;

    ll cnt = 0;
    ll max1 = 0;

    ll n = s.length();

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }

    if (cnt == n)
    {
       std:: cout << (n * n) << endl;
    }
    else
    {

        ll cntt = 0;

        ll i = 0;

        ll j = 0;
        cnt=0;

        while (true)
        {

            if (s[i % n] == '1')
            {
                cnt++;
            }

            else
            {
                max1 = max(max1, cnt);

                cnt = 0;
            }

            max1 = max(max1, cnt);

            j++;

            i++;

            if (j >= n)
            {

                if (s[i % n] == '0')
                {

                    break;
                }
            }
        }


            max1 = max(max1, cnt);

            ll val1 = (max1 + 1);
            ll val2 = val1 * val1;

            ll val = val2 / 4;

          std::  cout << val << endl;
        
    }
} 
    int main()
    {

        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        // cout.tie(NULL);

        ll T;
        cin >> T;
        while (T--)
        {
            fun();
        }
    }