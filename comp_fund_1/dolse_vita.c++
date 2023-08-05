#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n,q;
        cin >> n>>q;

        long long arr[n];
        
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
           
        }

        long long ans=0;
        long long sum=0;
       sort(arr,arr+n);
		for(long long i=0;i<n;i++){
			sum+=arr[i];
			if(sum<=q)
			ans+=(q-sum)/(i + 1)+1;
		}
		cout<<ans<<endl;
        }
     
}




