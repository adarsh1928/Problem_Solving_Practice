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
		vector<int> r(3), c(3);
		for (int i = 0; i < 3; ++i) {
			cin >> r[i] >> c[i];
		}
		sort(r.begin(), r.end());
		sort(c.begin(), c.end());
 
		int a = (r[0] != r[1] ? r[0] : r[2]);
		int b = (c[0] != c[1] ? c[0] : c[2]);
		int d = (r[0] == r[1] ? r[0] : r[2]);
		int e = (c[0] == c[1] ? c[0] : c[2]);
		int x, y;
		cin >> x >> y;
 
		if ((d == 1 || d == n) && (e == 1 || e == n)) {
			if (x != d && y != e) cout << "NO\n";
			else cout << "YES\n";
            return;
		}
		else if (!(abs(a - x) % 2) && !(abs(b - y) % 2)) cout << "NO\n";
		else cout << "YES\n";
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