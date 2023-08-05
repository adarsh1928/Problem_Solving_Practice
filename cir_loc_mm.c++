#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n;
	
	vector <int> a(n),b;
	for(int &x:a) cin>>x;
 
	if(n&1){
		cout<<"NO"<<"\n";
		return;
	}
 
	sort(a.begin(),a.end());
 
	for(int i=0;i<n/2;i++){
		b.push_back(a[i]);
		b.push_back(a[n/2+i]);
	}
 
	for(int i=0;i<n;i++)
		if(b[i]==b[(i+1)%n]){
			cout<<"NO"<<"\n";
			return;
		}
 
	cout<<"YES"<<"\n";
	for(int x=0;x<n;x++)
		cout<<b[x]<<" ";
	cout<<"\n";
}
 
int main(){
	int t; cin>>t;
	while(t--) solve();
	return 0;
}