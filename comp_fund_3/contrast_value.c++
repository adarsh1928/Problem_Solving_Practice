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
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i > 0)
        {
            if (v[i] == v[0])
            {
                cnt++;
            }
        }
    }

    if (cnt == n - 1)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = 0;
    vl diff;

    for (int i = 0; i < n -1;i++)
    {

        ll diff1=v[i+1]-v[i];
        int f;

        if(diff1==0) continue;

        if(diff1>0) f=1;
        else if(diff1<0) f=-1;
        else f=0;

        if(diff.size()==0){
            diff.push_back(f);
            ans++;
        }

        else{
            
            ll back1=diff.back();

             int f1;

             if(back1>0) f1=1;
             else if(back1<0) f1=-1;
             else f1=0;

             if((f1==1 && f==-1) || (f1==-1 && f==1)){
                ans++;
                diff.push_back(f);
             }
        }
        
    }

    ans=diff.size()+1;

    cout << ans << endl;
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