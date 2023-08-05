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
    set<ll>st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    if(st.size()!=n){
        cout<<"NO"<<endl;
        return;
    }
    ll freq[105];
 
    for (int i=2;i<=n;i++){
			for (int j=0;j<i;j++) freq[j]=0;
			for (int j=0;j<n;j++) freq[v[j]%i]++;
			ll min1=freq[0];
			for (int j=1;j<i;j++) min1=min(min1,freq[j]);
			if (min1>1) {
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