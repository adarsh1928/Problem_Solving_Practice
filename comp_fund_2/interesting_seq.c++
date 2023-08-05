// // Adarsh patel

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// typedef vector<pair<ll, ll>> vp;

// void fun()
// {

//     ll n, target;
//     cin >> n >> target;

//     if (n < target)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     if (n == target)
//     {
//         cout << n << endl;
//         return;
//     }

//     vector<ll> bit1(70, 0);
//     vector<ll> bit2(70, 0);

//     for (int i = 0; i < 60; i++)
//     {

//         if ((1) & (n >> i))
//         {
//             bit1[i] = 1;
//         }
//     }
//     for (int i = 0; i < 60; i++)
//     {

//         if ((1) & (target >> i))
//         {
//             bit2[i] = 1;
//         }
//     }

//     ll f = 0;
//     ll ff = LONG_LONG_MAX;
//     ll f1 = 0;

//     for (int i = 60; i >= 0; i--)
//     {
//         ll bi = 1LL << i;

//         if (bit1[i] == 0 && bit2[i] == 1)
//         {
//             f1 = 1;
//         }
//         else if (bit1[i] == 1 && bit2[i] == 1)
//         {
//             ff = min(ff,(((n >> i) << i) + bi - 1));
//         }
//         else if (bit1[i] == 1 && bit2[i] == 0)
//         {

//                 f = max(f,(((n >> i) << i) + bi));
//         }
//     }

//     if (f1 == 1 || f > ff)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     ll ans = f;

//     cout << ans << endl;
// }
// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll T;
//     cin >> T;
//     while (T--)
//     {
//         fun();
//     }
// }

// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

  ll fun(ll left, ll right) {

        
    ll cnt=0;
        while(left!=right){
          right=  right>>1;
          left=  left>>1;
            cnt++;
        }
        return left<<cnt;

    }

void fun()
{

     ll n,x;
    cin >> n >> x;
 
    ll l = n, r = 5e18, ans = -1;
 
    while(l<=r){
        ll mid = (l+r)/2;
        ll val = fun(n,mid);
 
        if(val <= x){
            if(val == x)
                ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
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