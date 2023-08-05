#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        
          string s; cin >> s;
    ll ans = (n * (n+1)) / 2;
    for(int i = 1; i < n; ++i) {
        if(s[i] == s[i-1]) {
            ans -= i;
        }
    }
    cout << ans << endl;
    }
}