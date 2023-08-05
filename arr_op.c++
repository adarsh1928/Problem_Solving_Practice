#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n ,k;
        cin >> n>>k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int cnt=0;
        long long s=0;
      for(int i=0;i<k;i++)
    {
        s+=arr[i+k]/arr[i];
    }
    for(int i=2*k;i<n;i++)s+=arr[i];
    cout<<s<<"\n";
           }
}