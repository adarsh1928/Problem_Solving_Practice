// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,coin;
    cin >> n>>coin;

    vl v(n+1);
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pq.push(v[i]+i);
    }

    ll ans=0;
    while(pq.size()){
        ll top1=pq.top();
        pq.pop();

         if(top1>coin){
            break;
         }

         ans++;
         coin-=top1;

    }

    cout<<ans<<endl;


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