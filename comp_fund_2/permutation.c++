// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int first=0;
    int second=0;
    int tie=0;

 for(int i=0;i<n;i++){
    if(v[i]==i+1 && v[i]!=(n-i)) first++;
    else if(v[i]==n-i && v[i]!=i+1) second++;
    else if(v[i]!=i+1 && v[i]!=(n-i)) tie++;
 }

 if(first>=(second+tie)){
    cout<<"First"<<endl;
 }
 else if(second>(first+tie)){
    cout<<"Second"<<endl;
 }
 else cout<<"Tie"<<endl;


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