// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string s;
    cin >> s;

    int n = s.length();
    int cnt=0;

    if(n==1){
        if(s[0]=='^'){
            cnt++;
        }
        if(s[0]=='_'){
            cnt+=2;
        }

        cout<<cnt<<endl;
        return;
    }

    if(s[n-1]=='_'){
        cnt++;
    }
    if(s[0]=='_'){
        cnt++;
    }

    for (int i = 0; i < n;)
    {

        if (s[i] == '^')
        {
            i++;
            continue;
        }
        else
        {
            int j = i + 1;
            while (j < n && s[j] == s[i])
            {
                j++;
            }
           cnt+=((j-i-1));
          
            i=j;

        }
    }

    cout<<cnt<<endl;
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