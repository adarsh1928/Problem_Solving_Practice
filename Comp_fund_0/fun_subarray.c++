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

        int arr[n];
      
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int j=n-1;
        int cnt=0;
        int ans=0;
        while(j>=0){
                while(arr[j]==arr[n-1]){
                    cnt++;
                    j--;
                }
                if(j<0) break;
                ans++;
                j-=cnt;
                cnt=cnt*2;
        }
       cout<<ans<<endl;
    }
}