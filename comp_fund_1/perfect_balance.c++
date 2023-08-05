#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {

    string s;
    cin >> s;
    int n = s.length();
    int f=0;
    set<char>set1;
      int i;
      int j;
      for(i=0;i<n;i++){
          if(set1.find(s[i])==set1.end()){
              set1.insert(s[i]);
          }
          else{
             break;
          }
      }
      int k=0;
      for(int j=i;j<n;j++){
          if(s[j]!=s[k]){
            f=1;
            break;
          }
          else k++;
      }

      if(f==1) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
  }
