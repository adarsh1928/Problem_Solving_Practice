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

    vl v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    set<ll> st;

    for (int i = 1; i <= n; i++)
    {

        if (i != v[i])
        {
            st.insert((abs(v[i] - i)));
        }
    }
    
    ll gcd=0;

    for(auto &i:st){
        gcd=__gcd(gcd,i);
    }

    cout<<gcd<<endl;
    

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