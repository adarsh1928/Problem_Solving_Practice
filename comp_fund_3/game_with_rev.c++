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

    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
    {
        cout << 0 << endl;
        return;
    }

    ll cnt = 0;
    ll j = n - 1;

    for (ll i = 0; i < n; i++)
    {
        if (s1[i] == s2[j])
        {
        }
        else
            cnt++;

        j--;
    }
    ll cnt2 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            cnt2++;
    }
    string temp1=s1;
    reverse(temp1.begin(),temp1.end());

    string temp2=s2;
    reverse(temp2.begin(),temp2.end());

    if((temp1==s2) || (s1==temp2)){
        cout<<2<<endl;
        return;
    }

    else{


        ll val1=(cnt2*2)-(cnt2%2);
        ll val2=(cnt*2)-((cnt+1)%2);

        cout<<min(val1,val2)<<endl;
    }
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