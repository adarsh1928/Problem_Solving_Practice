// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    ll a[n+1];
  for (int i = 1; i <= n; i++)
   		cin >> a[i];
 
   	sort(a + 1, a + n + 1);
 
   	if (n == 1) {
   		cout << -1;
   		return;
   	}
   	if (n == 2) {
   		if (a[1] == a[2]) {
   			cout << 1 << endl << a[1];
   			return;
   		}
   		cout << 2 + ((a[2] - a[1]) % 2 == 0) << endl;
   		int x = a[2] - a[1];
   		cout << a[1] - x << " ";
   		if ((a[2] - a[1]) % 2 == 0)
   			cout << (a[2] + a[1]) / 2 << " ";
   		cout << a[2] + x;
   		return;
   	}
 
   	set <int> s;
 
   	for (int i = 2; i <= n; i++)
   		s.insert(a[i] - a[i - 1]);
 
   	if (s.size() == 1) {
   		if (a[2] == a[1]) {
   			cout << 1 << endl;
   			cout << a[1];
   			return;
   		}
   		cout << 2 << endl;
   		int x = *s.begin();
   		cout << a[1] - x << " " << a[n] + x;
   		return;
   	}
   	else if (s.size() == 2) {
   		int x = *s.rbegin();
   		int cnt = 0, ans;
   		for (int i = 2; i <= n; i++) {
   			if (a[i] - a[i - 1] == x && (a[i] + a[i - 1]) % 2 == 0) {
   				cnt++;
   				ans = (a[i] + a[i - 1]) / 2;
   			}
   		}
   		if (cnt == 1 && x / 2 == *s.begin())
   			cout << 1 << endl << ans;
   		else
   			cout << 0;	
   	}
   	else
   		cout << 0;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  
        fun();
    
}