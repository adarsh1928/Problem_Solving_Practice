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
    int cnt=0;
    
     for(int i=0;i<n;i++){
        int in1=(i-1+n)%n;
        int in2=(i+1)%n;

        if(v[in1]!=v[in2]){
            cnt++;
        }
     }
     if(cnt>0){
        cout<<n<<endl;
     }
     else cout<<(n/2+1)<<endl;
     
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