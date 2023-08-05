#include <bits/stdc++.h>
using namespace std;
long long t,k,n,a,b,c,i,j;
string s;
int main()
{
	cin>>t;
	for(k=1;k<=t;k=k+1)
	{
		cin>>n>>s;s=s+"W";b=0;c=0;a=1;
		for(i=0;i<=n;i=i+1)
		{
			if(s[i]=='W'&&b+c==1)a=0;
			if(s[i]=='W'){b=0;c=0;}
			if(s[i]=='R')b=1;
			if(s[i]=='B')c=1;
		}
		if(a==0)puts("NO");else puts("YES");
	}
	return 0;
}
