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
         string temp=s;
        int n=s.length();
         
         vector<bool>prev(26,false);
          int cnt=0;
         for(int i=0;i<n;i++){
            if(prev[s[i]-'a']==true){
                 cnt+=2;
                 for(int j=0;j<26;j++){
                     prev[j]=false;
                 }
            }
            else{
                prev[s[i]-'a']=true;
            }
         }
       cout<<(n-cnt)<<endl;
    }
}