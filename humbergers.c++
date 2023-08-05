#include <bits/stdc++.h>
using namespace std;

int main()
{
    
        string temp;
        cin>>temp;

        int nb,ns,nc;
        cin>>nb>>ns>>nc;

        int pb,ps,pc;
        cin>>pb>>ps>>pc;

        int r;
        cin>>r;
          int cntb=0,cnts=0,cntc=0;
        for(auto i:temp){
            if(i=='B') cntb++;
            else if(i=='C') cntc++;
            else cnts++;
        }
          int one=pb+ps+pc;
          
        int min1=min({nb/cntb,nc/cntc,ns/cnts});
        int exb=pb*(nb-(min1*cntb));
        int exs=ps*(ns-(min1*cnts));
        int exc=pc*(nc-(min1*cntc));

        int sum1=r+exb+exc+exs;
        int mid1=sum1/one;
        cout<<mid1+min1<<endl;
    
}