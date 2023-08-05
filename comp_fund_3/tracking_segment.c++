// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool fun1(vl &nums, ll mid, vp &p1)
{

    vl temp(100005, 0);

    for (ll i = 0; i <= mid; i++)
    {
        temp[nums[i]-1] = 1;
    }
    for (ll i = 1; i < temp.size(); i++)
    {
        temp[i] = temp[i] + temp[i - 1];
    }

    for (ll i = 0; i < p1.size(); i++)
    {
       if(p1[i].first==1){
           ll range=p1[i].second/2;
           if(range<temp[range-1]) return true; 
       }
       else{
          ll range=(p1[i].second-p1[i].first+1)/2;
          ll num=temp[p1[i].second]-temp[p1[i].first-1];

          if(num>range) return true;
       }
        
    }
    return false;
}

void fun()
{

    ll m,n;
    std::cin >> m>>n;

    vp p1;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        std::cin >> x >> y;

        p1.push_back({x, y});
    }
    ll q;
    std::cin>>q;

     vl v(q+1);

    for (ll i = 0; i < q; i++)
    {
        ll x;
        std::cin >> x;

        v[i] = x;
    }
    ll l = 0;
    ll h = m-1;
    ll ans=-1;

    while (l <= h)
    {
        ll mid = (l + h) / 2;
        bool f1=fun1(v,mid,p1);

        if(f1){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }

    std::cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    ll T;
    std::cin >> T;
    while (T--)
    {
        fun();
    }
}