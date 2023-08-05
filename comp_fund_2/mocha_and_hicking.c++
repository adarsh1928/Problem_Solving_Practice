// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    int cnt1=0, cnt0=0;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            cnt1++;
        else
            cnt0++;
    }
    v.push_back(1);

    if (cnt1 == n)
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (cnt0 == n)
    {
        for (int i = 1; i <= n + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    int b = true;
    for (int i = 1; i <= n; i++)
    {
        // cout<<"for i is : "<<i<<endl;
        if (b && ((v[i] == 0) && (v[i + 1] == 1)))
        {
            cout << i << " " << n + 1 << " ";
            b = false;
        }
        else
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