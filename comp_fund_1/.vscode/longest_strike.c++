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

        int a[n];

       map<int, int> map1;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		map1[a[i]]++;
	}
	vector<int> c;
	for(auto x : map1)
	{
		if(x.second >= k)
		{
			c.push_back(x.first);
		}
	}
	if(c.size() == 0)
	{
		cout << -1 << endl;
	}
    else{
	sort(c.begin(), c.end());
	int mx = 0;
	int lans = c[0], rans = c[0];
	int l = c[0];
	for(int i = 1; i < c.size(); i++)
	{
		if(c[i]-1 == c[i-1])
		{
			if(c[i]-l > mx)
			{
				lans = l;
				rans = c[i];
				mx = c[i]-l;
			}
		}
		else
		{
			l = c[i];
		}
	}
	cout << lans << " " << rans << endl;
    }

    }
}