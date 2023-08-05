#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define N 200005
#define MAX 10000002
 
bool v[MAX];
int len, sp[MAX];
 
void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (int i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (int j = i; ((long long)j*i) < (long long)MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    Sieve();
 
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((y - x) == 1) {
            cout << -1 << '\n';
            continue;
        }
        if (__gcd(x, y) != 1) {
            cout << 0 << '\n';
            continue;
        }
        int res = 1e9;
        int diff = y - x;
        while (diff != 1) {
            int prime = sp[diff];
            // cout << prime << endl;
            if ((x % prime) == (y % prime)) {
                res = min(res, (prime - x % prime) % prime);
            }
            diff /= prime;
        }
        cout << res << '\n';
 
    }
       
}
 
