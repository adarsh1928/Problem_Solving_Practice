// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k,x;
    cin >> n>>k>>x;

    if(k==1 && x==1) {
        cout<<"NO"<<endl;
        return;
    }

    if(k==2 && n%2!=0 && x==1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    if(x==1){
        if(n%2==0){
            cout<<(n/2)<<endl;
            for(int i=1;i<=(n/2);i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else{
             cout<<(n/2)<<endl;
            for(int i=1;i<=(n/2)-1;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
    }
    else{
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
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