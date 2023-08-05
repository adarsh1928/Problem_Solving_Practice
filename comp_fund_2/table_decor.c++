#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll r,g,b;
        cin >> r>>g>>b;

        vector<ll>v={r,g,b};
       
       ll val1=(v[0]+v[1]+v[2])/3;
       ll val2=min({r+g,g+b,b+r});
        cout<< min(val1,val2) <<endl;
}