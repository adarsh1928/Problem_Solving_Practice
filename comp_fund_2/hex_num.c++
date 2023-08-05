// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

    int n;
ll cnt=0;

void fun(int num)
{
      cout<<"num "<<num<<" ";
    if(num>n) return;
    fun(num*10);
    fun(num*10+1);
    cnt++;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

        fun(1);
        // cout<<cnt<<endl;
    
}