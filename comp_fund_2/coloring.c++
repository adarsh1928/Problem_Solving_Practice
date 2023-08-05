// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m,k;
    cin >> n>>m>>k;

    vl v(m);
    ll max1=0;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<int>());

    int val1=n/k;
    int rem=n%k;

    for(int i=0;i<m;i++){
        if(v[i]==(val1+1)){
            if(rem==0){
                cout<<"NO"<<endl;
                return;
            }
            else{
                rem--;
            }
        }
        else if(v[i]>val1){
            cout<<"NO"<<endl;
            return;
        }
    }


    cout<<"YES"<<endl;

 

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