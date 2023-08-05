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
 
	vector<int> a(n);
	vector<int> b(n);
 
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
 
	multiset<long long> s;
	long long sum = 0;
 
	for (int i = 0; i < n; ++i) {
		long long ans = 0;
		s.insert(sum + a[i]);
		while (!s.empty() && *s.begin() <= sum + b[i]) {
			ans += max(0LL, *s.begin() - sum);
			s.erase(s.begin());
		}
		ans += (long long) s.size() * b[i];
		sum += b[i];
		cout << ans << ' ';
	}
 
	cout << '\n';

  

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