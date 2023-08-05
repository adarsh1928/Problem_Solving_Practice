#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]].push_back(i);
        vector<pair<int, char>> freq;
        for (auto &x : mp)
            freq.push_back({x.ss.size(), x.ff});
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());
        int mn_char = -1, diff = INT_MAX;
        for (int i = 26; i > 0; i--)
        {
            if (n % i != 0)
                continue;
            int fr = n / i;
            int fix = 0;
            for (int j = 0; j < min(i, (int)freq.size()); j++)
            {
                fix += min(freq[j].ff, fr);
            }
            if (n - fix < diff)
            {
                diff = n - fix;
                mn_char = i;
            }
        }
        // cout<<mn_char<<" ";
        map<char, int> req_charset;
        int final_fr = n / mn_char;
        for (int i = 0; i < min(mn_char, (int)freq.size()); i++)
        {
            req_charset[freq[i].ss] = final_fr;
        }
        char temp = 'a';
        while (req_charset.size() < mn_char)
        {
            req_charset[temp] = final_fr;
            ++temp;
        }
        // cout<<req_charset.size()<<endl;
        for (int i = 0; i < n; i++)
        {
            if (req_charset.find(s[i]) == req_charset.end())
            {
                s[i] = '#';
            }
            else
            {
                req_charset[s[i]]--;
                if (req_charset[s[i]] == 0)
                    req_charset.erase(s[i]);
            }
        }
        cout << count(s.begin(), s.end(), '#') << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                char curr = req_charset.begin()->first;
                s[i] = curr;
                req_charset[curr]--;
                if (req_charset[curr] == 0)
                    req_charset.erase(curr);
            }
        }

        cout << s << endl;
    }
}
