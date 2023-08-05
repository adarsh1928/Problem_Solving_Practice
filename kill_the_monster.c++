#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ;
        unsigned long long int hc,dc,hm,dm;
        cin>>hc>>dc>>hm>>dm;
        unsigned long long int k,w,a;
        cin>>k>>w>>a;
        unsigned long long int flag=0;
        for(unsigned long long int i=0;i<=k;i++)
        {
            unsigned long long int ca=i;
            unsigned long long int cb=k-i;
 
            unsigned long long int newattack=dc+ca*w;
            unsigned long long int newhealth=hc+cb*a;
            unsigned long long int monsterturn,characterturn;
            if(newhealth%dm==0)
                monsterturn=newhealth/dm;
            else
                monsterturn=newhealth/dm + 1;
            if(hm%newattack==0)
                characterturn=hm/newattack;
            else
                characterturn=hm/newattack + 1;
            if(characterturn<=monsterturn)
            {
                flag=1;
                break;
            }
 
 
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 
}