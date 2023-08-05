
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2
#define endl "\n"


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solvee()
{
    int a, b;
    cin >> a >> b;
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    map<char, int> mp;
    for (int i = 0; i < s1.length(); i++)
    {
        mp[s1[i]]++;
    }
    for (int j = 0; j < s2.length(); j++)
    {
        mp[s2[j]]++;
    }
    int ones = 0;
    char t = ' ';
    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        if (it->second % 2 != 0)
            ones++, t = it->first;
    }

    if (ones > 0 && (s1.length() + s2.length()) % 2 == 0)
    {

        cout << "NO" << endl;
        return;
    }
    else if (ones > 1 && (s1.length() + s2.length()) % 2 != 0)
    {

        cout << "NO" << endl;
        return;
    }

    else if (t and (s1.length() + s2.length()) % 2 != 0)
    {
        if (s1.length() > s2.length())
        {
            for (auto &i : s1)
            {
                if (i == t)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
            return;
        }
        if (s1.length() < s2.length())
        {
            for (auto &i : s2)
            {
                if (i == t)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}


void solve()
{
    ll n, m;
    cin >> n >> m;
    string string1, string2;
    cin >> string1 >> string2;
    vector<ll> mappfreqq(128, 0);



    if (m > n)
    {
        ll temp = n;
        n = m;
        m = temp;
        string tempstr = string1;
        string1 = string2;
        string2 = tempstr;
    }
    for (ll i = 0; i < n; i++)
    {
        mappfreqq[string1[i]]++;
    }
    for (ll i = 0; i < m; i++)
    {
        mappfreqq[string2[i]]--;
    }

    ll flag = 1, cnt = 0, diff = n - m;
    for (ll i = 0; i < 128; i++)
    {
        if (mappfreqq[i] < 0)
        {
            flag = 0;
            break;
        }
        if (mappfreqq[i] % 2 == 0)
        {
            continue;
        }
        if (cnt)
        {
            flag = 0;
        }
        else
        {
            cnt = 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}