// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;


    string s1,s2;
    cin>>s1>>s2;

    vector<ll>freq1(26,0);
    vector<ll>freq2(26,0);

    ll cnt=0;

    if(s1==s2){
        cout<<"YES"<<endl;
        return;
    }

    for(ll i=0;i<n;i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;

        if(s1[i]==s2[i]) cnt++;

        if(s1[i]!=s2[i] && i<2 && i>n-2){
            cout<<"NO"<<endl;
            return;
        }

    }

    

    for(int i=0;i<26;i++){
        // cout<<"freq1[i] "<<" "<<freq1[i]<<" ";
        // cout<<"freq2[i] "<<" "<<freq2[i]<<" ";
        // cout<<endl;
        if(freq1[i]!=freq2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    if(cnt<2){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;


    

    
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