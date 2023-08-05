// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string s1, s2;
    cin >> s1 >> s2;

    ll n1 = s1.length();
    ll n2 = s2.length();



    ll ans = 0;
    int f = 0;

    if(n1<n2){
        ll val=s2[0]-'0';
        ans+=(val);
        ans+=((9*(n2-1)));
        cout<<ans<<endl;
        return;
    }
    else{

        ll in=-1;
        ll res=0;

        for(ll i=0;i<n2;i++){
        
             if(s1[i]!=s2[i]){
                in=i;
                break;
             }      
        }
        if(in==-1){
            cout<<0<<endl;
            return;
        }
        else{
            ll curr=s2[in]-s1[in];
            ll rest=(n2-in-1);

            ll ans=curr+rest*9;

            cout<<ans<<endl;
            return;
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