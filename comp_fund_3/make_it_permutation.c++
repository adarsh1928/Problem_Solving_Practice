// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funn(ll mid, vector<ll> &v, ll c, ll d, int n)
{

    ll cnt1 = 0;
    ll cnt2 = 0;

    set<ll> st;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= mid)
            st.insert(v[i]);
        else
            cnt2++;
    }

    ll size1 = st.size();

    ll cost = cnt2 * c;

    ll cost1 = (mid - size1) * d;

    cost += cost1;

    return cost;
}

void fun()
{

    ll n, c, d;
    cin >> n >> c >> d;

    vl v(n);

    set<ll> st;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);

    }
    sort(v.begin(), v.end());

    ll ans = n*c+d;

    vl temp;
    ll cnt = 0;

    for (ll i = 1; i <= n; i++)
    {

         if(st.find(i)!=st.end()){
            cnt++;
         }

         ll val1=(n-cnt)*c;
         ll val2=(i-cnt)*d;
         
         ll val=val1+val2;

         ans=min(ans,val);
    }

    set<ll>st2;

    for(ll i=0;i<n;i++){

        st2.insert(v[i]);

        ll size1=st2.size();
    
        ll val1=(n-size1)*c;
        ll val2=(v[i]-size1)*d;

        ll val=val1+val2;

        ans=min(ans,val);

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