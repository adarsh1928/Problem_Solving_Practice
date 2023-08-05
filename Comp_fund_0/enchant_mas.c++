#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n, k;
        cin >> n >> k;

        long long arr[n];
        vector<long long> prefix(n, 0);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (i == 0)
                prefix[i] = arr[i];
            else
                prefix[i] = prefix[i - 1] + arr[i];
        }
        long long ans = 0;
        if (n > k)
        {
            long long i = 0;
            long long j = k - 1;

            long long sum1 = prefix[j] - prefix[i];
            i++;
            j++;

            while (j < n && i < n)
            {
                if ((prefix[j] - prefix[i]) > sum1)
                    sum1 = prefix[j] - prefix[i];

                i++;
                j++;
            }
            ans += sum1;
            ans += (((k - 1) * k) / 2);

            cout << ans << endl;
        }
        else
        {
            long long x=prefix[n-1]+(k*n)-n*(n+1)/2;
            cout<<x<<endl;
        }
    }
}