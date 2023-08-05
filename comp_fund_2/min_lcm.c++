// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int fun(int n)
{

    int ans1 = 1;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans1=n/i;

            return ans1;

        }
    }
    return ans1;
}

void fun()
{

    ll n;
    cin >> n;

    int val=fun(n);
     
     cout<<val<<" "<<n-val<<endl;


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