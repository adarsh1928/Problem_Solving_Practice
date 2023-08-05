// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k;
    cin >> n >> k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl temp;
    vl bit(32, 0);


    for (ll i = 0; i < n; i++)
    {

        ll num = v[i];
        ll f = 0;
        vl temp2(32, 0);

        // cout<<v[i]<<endl;

        for (ll j = 31; j >= 0; j--)
        {

            bool bit1 = (1 << j) & v[i];
        bool bit2 = (1 << j) & k;

            // cout<<bit1<<" ";

            

            if (bit2 == 1 && bit1 != 1)
            {
                f = 1;
                break;
            }
           
        }
        if (f == 0)
        {
            temp.push_back(v[i]);
            // for (ll itr = 0; itr < 32; itr++)
            // {
            //     if (temp2[itr] == 1)
            //     {
            //         bit[itr] = 1;
            //     }
            // }
        }
    }
    // for(auto &i:temp){
    //     cout<<i<<" ";
    // }
    
    if( temp.size()==0 ){
        cout<<"NO"<<endl;
        return;
    }

    ll val=temp[0];

    for(ll i=1;i<temp.size();i++){
        val=val &temp[i];
    }
    if(val==k) {

    cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


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