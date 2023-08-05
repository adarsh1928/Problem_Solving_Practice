// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vl v;

bool fun(int m, vl &dig, int cnt, int prev, ll sum)
{

    if (cnt == m)
    {
        if (m % 2 == 0)
        {
            return sum > 0;
        }
        else
            return sum < 0;
    }

    for (auto &i : dig)
    {
        if ((cnt + 1) % 2)
        {
            if (prev != i && sum - i < 0)
            {
                if (fun(m, dig, cnt + 1, i, sum - i))
                {
                    v.push_back(i);
                    return true;
                }
            }
        }
        else
        {
            if (prev != i && sum + i > 0)
            {
                if (fun(m, dig, cnt + 1, i, sum + i))
                {
                    v.push_back(i);
                    return true;
                }
            }
        }
    }
    return false;
}

void fun()
{

    string s;
    cin >> s;

    ll m;
    cin >> m;

    vl dig;
    for (int i = 1; i <= 10; i++)
    {
        if (s[i - 1] == '1')
        {
            dig.push_back(i);
        }
    }
    fun(m, dig, 0, -1, 0);

    if (v.size())
    {
        cout << "YES" << endl;
        reverse(v.begin(),v.end());
        for (auto &i : v)
        {
            cout << i << " ";
        }
    }
    else cout<<"NO"<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        fun();
    
}