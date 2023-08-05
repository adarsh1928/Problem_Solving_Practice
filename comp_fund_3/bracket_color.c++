// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool fun1(string s){

    stack<char>st;

    for(ll i=0;i<s.length();i++){

        if(st.empty() && s[i]==')'){
            return false;
        }
        
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.top()==')'){
                return false;
            }
            else st.pop();
        }
    }

    return true;

}

void fun()
{

    ll n;
    cin >> n;

    string s;
    cin>>s;

    string s2=s;
    // reverse(s2.begin(),s2.end());

    for(ll i=0;i<n;i++){
        if(s2[i]=='('){
            s2[i]=')';
        }
        else s2[i]='(';
    }

    ll cnt1=0;
    ll cnt2=0;

    for(ll i=0;i<n;i++){
        if(s[i]==')'){
            cnt1++;
        }
        else {
            cnt2++;
        }
    }
   if(cnt1!=cnt2){
     cout<<-1<<endl;
     return;
   }
     bool f1=fun1(s);
     bool f2=fun1(s2);

    //  cout<<s2<<endl;

    //  cout<<"ff "<<f2<<endl;

     if(f1 || f2){
        cout<<1<<endl;
        for(ll i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
     }
    string temp=s;
    ll cnt=0;

    string ans=s;

    vl v(n,-1);

    ll f=0;

    for(ll i=0;i<n;i++){
        if( s[i]=='('){
         if(cnt>=0)   v[i]=1;
            cnt++;
           
        }
        if( s[i]==')'){
          if(cnt>0)  v[i]=1;
            cnt--;
        }
    }

    for(ll i=0;i<n;i++){
        if(v[i]==-1){
            v[i]=2;
        }
    }
    cout<<2<<endl;
    for(auto &i:v){
        cout<<i<<" ";
    }

    cout<<endl;

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