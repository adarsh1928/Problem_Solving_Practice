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

    vl temp;
    for (int i = 0; i < n-1; i++)
    {
        cin >> v[i];
    }
    temp.push_back(v[0]);

    for(int i=0;i<n-2;i++){

      temp.push_back(min(v[i],v[i+1]));
    }

    // if(temp.size()==n-1){
        temp.push_back(v[n-2]);
    // }

    for(auto &i:temp){
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