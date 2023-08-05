#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

      int n, m;
		cin>>n>>m;
		vector<vector<int>> a(n,vector<int>(m)), b;
		// cout<<n<<"  "<<m<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++)
				cin>>a[i][j];
			b.push_back(a[i]);
			sort(b[i].begin(), b[i].end());
		}
		vector<int> ans;
		bool f=1, g=1;
		for(int i=0; i<n && f; i++){
			for(int j=0; j<m && f; j++){
				if(a[i][j] !=b[i][j]){
					ans.push_back(j);
					if(ans.size()>=2)
						f=0;
				}
			}
		}
		if(f){
			cout<<"1 1 \n";
			continue;
		}
		int x= ans[0], y=ans[1];
		f=1;
		for(int i=0; i<n && f; i++){
			swap(a[i][x], a[i][y]);
			if(a[i] !=b[i])
				f=0;
		}
		f? cout<<x+1<<" "<<y+1<<endl : cout<<"-1"<<endl;
	}
 
    }
