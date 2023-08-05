// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {

//         int n,a,b;
//         cin >> n>>a>>b;

//         int arr[n];
        
//         vector<long long>prefix(n,0);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         prefix[0]=arr[0];
//         for(int i=1;i<n;i++){
//             prefix[i]=prefix[i-1]+arr[i];
//         }
//              long long ans=b*prefix[n-1];
//              long long prev=arr[0]*b;
//              long long min1=INT_MAX;
//              for(int i=0;i<n;i++){
//                  long long con=((prefix[n-1]-prefix[i])-(arr[i]*(n-i-1)))*b;
//                  long long temp2=con+prev+arr[i]*a;
//                 ans=min(temp2,ans);

//                 if(i!=n-1){
//                     prev+=(arr[i+1]-arr[i])*b;
//                 }
//              }
//                  cout<<ans<<endl;
            
            
//     }
// }
#include<bits/stdc++.h>
using namespace std;
using lol=long long int;
#define endl "\n"
const lol inf=1e18+8;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int _=1;
cin>>_;
while(_--)
{
    int n;
    lol a,b;
    cin>>n>>a>>b;
    vector<lol> x(n+1),p(n+1);
    x[0]=0;
    for(int i=1;i<=n;i++)   cin>>x[i];
    partial_sum(x.begin(),x.end(),p.begin());
    lol ans=inf;
    for(int i=0;i<=n;i++)
    {
        ans=min(ans,(a+b)*(x[i]-x[0])+b*(p[n]-p[i]-(n-i)*x[i]));
    }
    cout<<ans<<endl;
}
return 0;
}


