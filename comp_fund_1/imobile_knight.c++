#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin >> n>>m;
      
      if(n==2 && m==2){
          cout<<1<<" "<<2<<endl;
      }
      else if((n==3 && m==3) ||( m==3 && n==2) || (m==2 && n==3)){
        cout<<2<<" "<<2<<endl;
      }
     
      else cout<<1<<" "<<1<<endl;
        
    }
}