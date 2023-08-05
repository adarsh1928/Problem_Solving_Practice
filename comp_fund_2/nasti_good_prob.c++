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

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << (n - 1) << endl;
    // vector<int>ans;

    ll min1 = 1e18;
    ll in = -1;
    vvl ans;
    for (int i = 0; i < n; i++)
    {
        if (min1 > v[i])
        {
            min1 = v[i];
            in = i;
        }
    }
    ll re=0;

    

     for(int i=0;i<n;i++){
        if(i!=in){
            cout<<(in+1)<<" "<<(i+1)<<" "<<(min1)<<" "<<(min1+(abs(in-i)%2))<<endl;
        }
     }

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