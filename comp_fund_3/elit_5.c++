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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
    }

    ll sum1 = 0;

    while (pq.size() >= 2)
    {

        ll top1 = pq.top();
        pq.pop();
        ll top2 = pq.top();
        pq.pop();

         sum1+=(top1+top2);
        pq.push((top1+top2));
    }

    cout<<sum1<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        fun();
    
}