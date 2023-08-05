#include <bits/stdc++.h>
using namespace std;
bool isPeli(string s){
    string s1=s;
    reverse(s1.begin(),s1.end());

    if(s1==s) return true;
    else return false;
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin>>s;
        int n=s.length() ;
        
       string s1=s;
       sort(s1.begin(),s1.end());
       int k=0;
       if(isPeli(s)){
        cout<<"Draw"<<endl;
       }
       else{
           int i=0;
           int j=n-1;
           string a1="";
           string b1="";

           int cnt=0;
           while(i<j){
            if(s[i]<s[j] ){
                cout<<"Alice"<<endl;
            }
            else if(s[j]<s[i]){

            }
           }
       }

        
    }
}