

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

  ll fun1(vector<vector<ll>>& valv, ll i){
         ll lo = 0;
         ll hi = i - 1;
         ll ans = -1;
         while(lo <= hi){
             ll mid = lo + (hi - lo) / 2;
             if(valv[mid][0] <= valv[i][1]){
                    ans = mid;
                    lo = mid + 1;
             }
             else hi = mid - 1;
         }
        return ans;
    }
    
    ll funn(vector<ll>& startTime, vector<ll>& endTime, vector<ll>& vall) {
        
        vector<vector<ll>> valv;
        ll n = vall.size();
        
        for(ll i=0; i<n; i++){
             valv.push_back({endTime[i], startTime[i], vall[i]});
        }
        
        sort(valv.begin(), valv.end());
        
        
        vector<ll> dp(n, 0);
        dp[0] = valv[0][2];
        ll ans = valv[0][2];
        
        for(ll i=1; i<n; i++){
                 dp[i] = valv[i][2];
                 ll ed = fun1(valv, i);
                 if(ed != -1) dp[i] += dp[ed];
                 dp[i] = max(dp[i], dp[i-1]);
                 ans = max(ans, dp[i]);
        }
        
        return ans;        
    }

void fun()
{

    ll n;
    cin >> n;

    vector<vector<ll>>v;
    vector<ll>st;
    vector<ll>end;
    vector<ll>val;

    for (ll i = 0; i < n; i++)
    {
        vl temp;
        ll a,b,c;

        cin>>a>>b>>c;
        st.push_back(a);
        end.push_back(b);
        val.push_back(c);
        
    }
    ll anss=funn(st,end,val);

    cout<<anss<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        fun();
    
}