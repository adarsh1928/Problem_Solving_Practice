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

    string s1 = s;
    string s2 = s;

    if(s[0]=='?'){
        s[0]='0';
    }
  for(int i=1;i<s.length();i++){
    if(s[i]=='?'){
        s[i]=s[i-1];
    }
  }

  cout<<s<<endl;
  

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