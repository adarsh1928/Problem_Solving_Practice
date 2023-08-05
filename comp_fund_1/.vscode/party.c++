#include <bits/stdc++.h>
using namespace std;
int T,n,m,a[100005],d[100005];
int main() {
	cin>>T;
	while(T--) {
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i],d[i]=0;
		int minn=1<<30;
		for(int i=1,x,y;i<=m;i++) {
			cin>>x>>y;
			d[x]++,d[y]++;
			minn=min(minn,a[x]+a[y]);
		}
		if(m&1) {
			int ans=1<<30;
			for(int i=1;i<=n;i++)if(d[i]&1)ans=min(ans,a[i]);
			cout<<min(minn,ans)<<endl;
		}else puts("0"); 
	}
	return 0;
}
