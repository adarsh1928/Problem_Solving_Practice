// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll val;

void fun()
{

    string s;
    cin >> s;

    ll a, b;
    cin >> a >> b;

    int n = s.length();

    vl v(n+ 5, 0);

    ll p = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        v[i] = (((s[i] - '0') * p + (v[i + 1]))) % b;
        p=(p*10)%b;

        // cout<<"v[i] "<<v[i]<<" ";

    }
    for (int i = 1; i < n; i++)
    {
         val = ((val * 10) + s[i - 1] - '0') % a;

        //  cout<<"val "<<val<<" ";

        if (val == 0 && v[i] == 0 && s[i] != '0')
        {
            cout << "YES" << endl;
            string ans1=s.substr(0,i);
            string ans2=s.substr(i);

            cout<<ans1<<endl;
            cout<<ans2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        fun();
    
}