// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll,ll> pp;

void fun()
{

    ll n,k;
    cin >> n>>k;

int cnt=0;
    set<pp>st;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;

         st.insert({a,b});
    }

    int cnt1=0;
    for(auto &i:st){
        if(i.first==k) cnt++;
        if(i.second==k) cnt1++;
    }

    if(cnt>0 && cnt1>0 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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