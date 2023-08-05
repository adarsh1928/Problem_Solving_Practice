#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        long long arr[n+1];

        for (long long i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long cnt = 0;
        for (long long i = 1; i <= n; i++)
        {
            for(int j=arr[i]-i;j<=n;j+=arr[i]){
                if(j>=0 && (arr[i]*arr[j])==(i+j) && i<j){
                    cnt++;
                }
            }
        }
    cout << cnt << endl;
    }
}
