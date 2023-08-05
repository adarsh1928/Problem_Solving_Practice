#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n,k;
        cin >> n>>k;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
    
      long long ans=0;
		for(long long i=0;i<k;i++){
			long long sum=0;
			for(long long j=i;j<n;j+=k) sum=max(sum,v[j]);
			ans+=sum;
		}
		cout<<ans<<"\n";
    }
}