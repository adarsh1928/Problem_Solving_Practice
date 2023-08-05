// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    string s;
    cin >> s;

    ll n = s.length();

    string temp1 = "";
    string temp2 = "";

    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        int cnt = 0;
        while (j < n && s[j] == s[i])
        {
            j++;
            cnt++;
        }
        if(cnt>=1){
            temp1+=s[i];
            temp1+=s[i]; 
        }
        else{
            temp1+=s[i];
        }
        i=j;
    }
    // cout<<"string temp1 "<< temp1<<endl;
    map<int,int>in;
    for(int i=0;i<temp1.length()-1;){
        if(temp1[i]==temp1[i+1]){
           in[i]++;
           i+=2;
        }
        else i++;
    }
    // temp1+=temp2[0];
     // temp1+=temp2[1];
    for(int i=0;i<temp1.length();){
        if( i<(temp1.length()-1) &&  temp1[i]==temp1[i+1]){
          if(in.find(i-2)!=in.end()){
              in.erase(i);
              temp2+=temp1[i];
          }
          else{
            temp2+=temp1[i];
            temp2+=temp1[i];
          }
          i+=2;
        }
        else{
            temp2+=temp1[i];
            i++;
        }
    }
    cout<<temp2<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}