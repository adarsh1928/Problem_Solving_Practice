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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
        {
            temp.push_back(v[i]);
        }
        else if (temp.back() != v[i])
        {
            temp.push_back(v[i]);
        }
    }

    ll cnt = 0;

    for (int i = 0; i < temp.size(); i++)
    {
        if ((i == 0 || temp[i - 1] > temp[i]) && (i == temp.size() - 1 || temp[i] < temp[i + 1]))
        {
            cnt++;
        }
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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