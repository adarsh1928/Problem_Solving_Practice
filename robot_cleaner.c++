#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> n >> m;

       int rb,cb,rd,cd;
       cin>>rb>>cb>>rd>>cd;
     int x,y;
      if(rb<=rd) x=rd-rb;
      else x=2*n-rb-rd;

      if(cb<=cd) y=cd-cb;
      else y=2*m-cb-cd;

      cout<<min(x,y)<<endl;
    }
}