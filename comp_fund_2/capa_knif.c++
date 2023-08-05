// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool ispeli(string s)
{
    string s1 = s;
    reverse(s1.begin(), s1.end());

    if (s1 == s)
        return true;
    return false;
}

void fun()
{

    ll n;
    cin >> n;

    string s;
    cin >> s;

    if (ispeli(s))
    {
        cout << 0 << endl;
        return;
    }
    ll min1 = 1e6;
    int ff = 0;

    for (int i = 0; i <= 25; i++)
    {
        char ch = i + 'a';
        if(s.find(ch)==s.npos) continue;
        int l = 0;
        int h = n - 1;
        ll cnt = 0;
        int f = 0;

        while (l < h)
        {
            if (s[l] == s[h])
            {
                l++;
                h--;
            }
            else if (s[l] != s[h] && s[l] != ch && s[h] != ch)
            {
                f = 1;
                break;
            }
            else if (s[l] == ch && s[h] != ch)
            {
                cnt++;
                l++;
            }
            else if (s[l] != ch && s[h] == ch)
            {
                cnt++;
                h--;
            }
        }
        if(f==1) ff++;

       if(f!=1) min1 = min(min1,cnt);
    }
    if(min1==(1e6)) cout<<-1<<endl;
    else cout<<min1<<endl;
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