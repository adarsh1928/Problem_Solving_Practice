#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
typedef vector<int64_t> vi;
typedef pair< int64_t,int64_t> ii;
typedef vector<pair<int64_t, int64_t> > vp;
typedef vector<pair<int64_t, ii> > vpp;
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define INF 1e9
#define SIZE 200001
#define mod 1000000007
#define int int64_t
void solve();
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
void solve()
{
    int n,m,k;cin>>n>>m>>k;
    int r=0,c=0,co=0;
    bool flag=false;
    vp ans;
    for(int i=r+1;i<=n;i++)
    {
        if(flag)
        {
            for(int j=1;j<=m;j++)
            {
                ans.pb(ii(i,j));
            }
            flag=false;
        }
        else
        {
            flag=true;
            for(int j=m;j>0;j--)
            {
                ans.pb(ii(i,j));
            }
        }
    }
    int pos=0,toko=k;
    for(int i=0;i<ans.size();i+=2)
    {
        pos=i;
        if(k==1)
            break;
        cout<<2<<" "<<ans[i].f<<" "<<ans[i].s<<" "<<ans[i+1].f<<" "<<ans[i+1].s<<"\n";
        k--;
    }
    cout<<ans.size()-(toko-1)*2<<" ";
    for(int i=pos;i<ans.size();i++)
        cout<<ans[i].f<<" "<<ans[i].s<<" ";
    cout<<"\n";
}
 
