#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
       string s;
       cin>>s>>n;

        int x=(60*(10*(s[0]-'0')+(s[1]-'0')))+(10*(s[3]-'0')+(s[4]-'0'));
         int y=x;
         int cnt=0;
        do{
            string l=to_string(y/60);
            string r=to_string(y%60);

            if(l.length()==1) l='0'+l;
            else if(l.length()==0) l='0'+l,l='0'+l;

            if(r.length()==1) r='0'+r;
            else if(r.length()==0) r='0'+r,r='0'+r;

           if(l[0]==r[1] && l[1]==r[0]) cnt++;

           y=y+n;
          y=y%1440;
        }
        while (y!=x);
        
        
         cout<<cnt<<endl;

    }
}