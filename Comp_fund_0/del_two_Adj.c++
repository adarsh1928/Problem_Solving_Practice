#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
          string s;
          cin>>s;
    
          char ch;
          cin>>ch;
        int n=s.length();

          unordered_map<int,char>m;
          for(int i=0;i<n;i++){
              if(s[i]==ch) m.insert({i,ch});
          }
         if(m.empty()) cout<<"NO"<<endl;
         else{
             int f=0;
             for(auto i:m){
                 if(i.first%2==0){
                     f=1;
                 }
             }
             if(f==1) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
         }
        
    }
}