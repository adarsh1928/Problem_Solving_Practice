#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, ans, sum;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        
        ans=0;
        ll h[n];
        
        for(i=0; i<n; i++)
        {
            cin>>h[i];
        }
        
        if((n%2)==1){
            for(i=1; i<n-1; i+=2){
                ans=ans+max(0ll, max(h[i-1]+1-h[i], h[i+1]+1-h[i]));
            }
        }else{
            ll pre[n], suff[n], diff;
            
            pre[0]=suff[n-1]=0;
            
            for(i=1; i<n-1; i++)
            {
                diff=max(0ll, max(h[i-1]+1-h[i], h[i+1]+1-h[i]));
                
                if((i%2)==0){
                    pre[i]=0;
                    suff[i]=diff;
                }else{
                    suff[i]=0;
                    pre[i]=diff;
                }
            }
            
            for(i=1; i<n; i++){
                pre[i]=pre[i-1]+pre[i];
            }
            
            for(i=n-2; i>=0; i--){
                suff[i]=suff[i]+suff[i+1];
            }
            
            ans=-1;
            for(i=0; i<=n-2; i+=2)
            {
                sum=0;
                if(i>0){
                    sum=sum+pre[i-1];
                }
                if(i+2<n){
                    sum=sum+suff[i+2];
                }
                if(ans==-1)
                ans=sum;
                else
                ans=min(ans, sum);
     
            }
            
            
        }
        
        cout<<ans<<"\n";    
    }
}
