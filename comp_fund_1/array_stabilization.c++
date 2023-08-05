#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v(n+1);

        for (int i = 1; i <= n; i++)
        {

            int x;
            cin >> x;

            v[i]=x;
        }

        int ans=0;

		for(int i=1;i<=n;i++){

			int j=i,sum=0,x=v[i],y=v[i%n+1];
            
			while(x!=y){
				x=__gcd(x,v[j%n+1]);
				y=__gcd(y,v[(j+1)%n+1]);
				sum++;
				j++;
			}
			ans=max(ans,sum);
		}
		cout<<ans<<'\n';
    }
}