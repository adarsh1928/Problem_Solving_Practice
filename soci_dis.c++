#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> n >>m;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            cnt+=(max(arr[i],arr[i+1]));
        }
        cnt+=(max(arr[0],arr[n-1]));
        cnt+=n;

        if(cnt<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}