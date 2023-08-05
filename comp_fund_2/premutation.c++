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

    vvl v(n,vl(n-1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> v[i][j];
        }
      
    }
    map<ll, ll> m;
    for (int i=0;i<n;i++)
    {
        m[v[i][0]]++;
    }
    ll val1;
    ll val2;
    for (auto &i : m)
    {
        if (i.second == (n - 1))
            val1 = i.first;
        else
            val2 = i.first;
    }
    vl ans;
    ans.push_back(val1);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0] == val2)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                ans.push_back(v[i][j]);
            }
            break;
        }
    }
    for(auto &i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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