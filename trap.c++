#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
       
        int n,k;
    cin>>n>>k;
    long long a[n+1];
    vector<pair<long long,long long> >v;
 
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        v.push_back({(a[i]-n+i),i});
    }
 
    sort(v.rbegin(),v.rend());
    vector<pair<long long,long long> > vp;
    for(int i=k;i<v.size();i++)
    {
        int idx=v[i].second;
        vp.push_back({idx,a[idx]});
    }
    long long ans=0;
    for(int i=0;i<vp.size();i++)
    {
        int idx=vp[i].first;
        int val=vp[i].second;
        ans+=idx+val-i-1;
    }
    cout<<ans<<endl;
 
       
    }
}