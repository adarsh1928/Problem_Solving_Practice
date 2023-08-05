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
    string s;
    cin >> s;
    int flag = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == 'B' || s[i] == 'R'){
            flag = i;
            break;
        }
    }
    if (flag == -1){
        for (int i = 0; i < n; i++){
            if (i % 2 == 0)
                s[i] = 'B';
            else
                s[i] = 'R';
        }
    }
    for (int i = flag - 1; i >= 0; i--){
        if (s[i + 1] == 'B')
            s[i] = 'R';
        else
            s[i] = 'B';
    }
    for (int i = flag + 1; i < n; i++){
        if (s[i] == '?' && s[i - 1] == 'B')
            s[i] = 'R';
        else if(s[i] == '?' && s[i - 1] == 'R')
            s[i] = 'B';
    }
    cout << s << endl;
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