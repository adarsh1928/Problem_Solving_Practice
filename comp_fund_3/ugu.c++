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
    int prev = -1;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (prev == 0 && s[i] == '1')
        {
            cnt++;
            prev = 1;
        }
        else if (prev == 1 && s[i] == '0')
        {
            prev = 0;
            cnt++;
        }
        if(prev==-1 && s[i]=='1'){
            prev=1;
        }
    }
    cout<<cnt<<endl;
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