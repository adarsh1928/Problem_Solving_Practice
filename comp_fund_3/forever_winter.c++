// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vp p1;

    map<ll, ll> mp;
    map<ll,ll>rev;

    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;

        p1.push_back({x, y});

        mp[x]++;
        mp[y]++;
    }


    set<ll> st;

    for (auto &i : mp)
    {
        // st.insert(i.second);
        rev[i.second]++;
    }
    vl v1;
    for(auto &i:rev){
        // st.insert(i.second);
        v1.push_back(i.second);
    }

    sort(v1.begin(),v1.end());

    // cout<<"temp1"<<temp1<<" "<<rev[temp1]<<endl;

    if(v1.size()!=3){
          cout<<(v1[0]-1)<<" "<<(v1[1]/(v1[0]-1))<<endl;
          return;
    }
 
     else{
        cout<<v1[1] <<" "<<(v1[2]/v1[1] )<<endl;
     }

    //  cout<<ansx<<" "<<ansy<<endl;


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