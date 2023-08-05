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

    string s;
    cin >> s;

    for (int i = 0; i < n-1; i++){
		if (s[i]!=s[i+1]){
			if (s[i]=='L') {
                cout<<(i+1)<<endl;
                return;
            }
			else {
                cout<<0<<endl;
                return;
            }
		}
	}
	cout<<-1<<endl;
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