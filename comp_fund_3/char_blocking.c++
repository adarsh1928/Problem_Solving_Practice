// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string s[2];
    int t, q;
    cin >> s[0] >> s[1] >> t >> q;
    int n = s[0].size();
    int dif = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0][i] != s[1][i])
            dif++;
    }
    priority_queue<int> tt;
    for (int qq = 0; qq < q; qq++)
    {
        while (!tt.empty() && tt.top() == -qq)
        {
            dif++;
            tt.pop();
        }
        int op;
        cin >> op;
        if (op == 3)
        {
            cout << (dif == 0 ? "YES\n" : "NO\n");
        }
        else if (op == 2)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            a--, b--, c--, d--;
            if (b == d)
            {
                swap(s[a][b], s[c][d]);
                continue;
            }
            if (s[0][b] != s[1][b])
                dif--;
            if (s[0][d] != s[1][d])
                dif--;
            swap(s[a][b], s[c][d]);
            if (s[0][b] != s[1][b])
                dif++;
            if (s[0][d] != s[1][d])
                dif++;
        }
        else
        {
            int id;
            cin >> id;
            id--;
            if (s[0][id] != s[1][id])
            {
                tt.push(-(qq + t));
                dif--;
            }
        }
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