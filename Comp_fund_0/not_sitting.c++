#include<bits/stdc++.h>
using namespace std;



void solve()
{
	int n , m;
	cin >> n >> m;
 
	vector<int>v;
 
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= m ; j++)
		{
			int dist = max(i - 1 , n - i) + max(j - 1 , m - j);
			v.push_back(dist);
		}
	sort(v.begin() , v.end());
 
	for(auto x : v)
		cout << x << ' ' ;
	cout << endl;
}
int32_t main()
{
	
	int t = 1;
	cin >> t;
	
	int test = 1;
	while(t--)
	{

		solve();
		test++;
	}
} 
