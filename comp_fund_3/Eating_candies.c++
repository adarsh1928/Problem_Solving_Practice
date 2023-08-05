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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl pref(n, 0);
    vl suff(n, 0);

    pref[0] = v[0];
    suff[n - 1] = v[n - 1];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + v[i];
    }

    ll l=0;
    ll h=n-1;

    ll max1=0;

    while(l<h){

        if(pref[l]==suff[h]){
            max1=max(max1,((l+1)+(n-h)));
            l++;
            h--;
        }
        else if(pref[l]>suff[h]){
            h--;
        }
        else l++;

    }
    cout<<max1<<endl;


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