#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        string s1,s2;
        cin>>s1>>s2;

        int f=0;
        
        vector<int>a1;
        vector<int>a2;
        vector<int>c1;
        vector<int>c2;

        string sr1="";
        string tr1="";

        for(int i=0;i<n;i++){

          if(s1[i]!='b') sr1+=s1[i];
          if(s2[i]!='b') tr1+=s2[i];
          if(s1[i]=='a') a1.push_back(i);
          if(s2[i]=='a') a2.push_back(i);
          if(s1[i]=='c') c1.push_back(i);
          if(s2[i]=='c') c2.push_back(i);
        }

        if(a1.size()!=a2.size() || c1.size()!=c2.size() || sr1!=tr1){
          cout<<"NO"<<endl;
        }
        else{
          int f=0;
          for(int i=0;i<a1.size();i++){
            if(a1[i]>a2[i]){
              f=1;
              break;
            }
          }
           for(int i=0;i<c1.size();i++){
            if(c1[i]<c2[i]){
              f=1;
              break;
            }
          }
          if(f==1){
            cout<<"NO"<<endl;
          }
          else{
            cout<<"YES"<<endl;
          }
        }

        
          
    }
}