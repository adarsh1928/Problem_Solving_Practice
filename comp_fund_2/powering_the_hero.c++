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
//     vector<int>pref(n+1,0);

//     for(int i=0;i<n;i++){
//         if(i==0) pref[i+1]=v[i];
//         else if(v[i]!=0) pref[i+1]=pref[i]+v[i];
//         if(v[i]==0) pref[i+1]=0;
//     }
// // for(auto &i:pref){
// //     cout<<i<<" ";

// // }
// // cout<<endl;
//     int i=0;
    ll ans=0;

//     while(i<n){
//         int j=i+1;
//         int cnt=0;
//         while(j<n && v[j]==0){
//             cnt++;
//             j++;
//         }
//        if(i-cnt<0) ans+=pref[i+1];
//        else ans+=(pref[i+1]-pref[(i-cnt)+1]);
//           i=j;
//     }
priority_queue<ll>pq;
for(int i=0;i<n;i++){
 if(pq.size() && v[i]==0){
    ans+=pq.top();
    pq.pop();
 }
 else if(v[i]!=0){
    pq.push(v[i]);
 }
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