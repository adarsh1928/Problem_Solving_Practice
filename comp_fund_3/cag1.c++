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
   cin>>s;



    int n=s.length();

    for(int i=0;i<n;i++){
        int val1=s[i]-'0';
        int val2=9-val1;

        if(i==0 && val1==9){

        }
        else {
            int val=min(val1,val2);
            s[i]=val+'0';
        }
    }

    cout<<s<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}