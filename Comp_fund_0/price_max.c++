#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, k, i, j, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>k;
        ans=0;
        
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<n; i++)
        {
            ans=ans+a[i]/k;
            a[i]=a[i]%k;
        }
        
        sort(a, a+n);
        
        i=n-1; 
        j=0;
        
        while(i>j){
            if(a[i]+a[j]>=k){
                ans++;
                i--;
                j++;
            }else{
                j++;
            }
        }
        
        cout<<ans<<"\n";
    }
}
