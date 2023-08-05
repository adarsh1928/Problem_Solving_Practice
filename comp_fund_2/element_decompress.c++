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
    vvl in(n + 1);

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        in[v[i]].push_back(i);

        if (in[v[i]].size() > 2)
        {
            f = 1;
        }
    }
    if (f == 1 || in[1].size() == 2 || in[n].size() == 0)
    {
        cout << "NO" << endl;
        return;
    }

    vl ans1(n, -1);
    vl ans2(n, -1);

    set<ll> s1, s2;

    for (int i = n; i >= 1; i--)
    {
        if (in[i].size() == 1)
        {
            ans1[in[i][0]] = i;
            ans2[in[i][0]] = i;
        }
        else if (in[i].size() == 2)
        {
            ans1[in[i][0]] = i;
            ans2[in[i][1]] = i;

            s1.insert(in[i][1]);
            s2.insert(in[i][0]);
        }
        else
        {
            if(s1.size()==0 || s2.size()==0){
                cout<<"NO"<<endl;
                return;
            }
            ll val1 = *(s1.begin());
            ll val2 = *(s2.begin());

            s1.erase(s1.begin());
            s2.erase(s2.begin());

            ans1[val1] = i;
            ans2[val2] = i;
        }
    }
    cout << "YES" << endl;
    for (auto &i : ans1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto &i : ans2)
    {
        cout << i << " ";
    }
    cout << endl;
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