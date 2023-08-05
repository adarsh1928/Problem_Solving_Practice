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

        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<n;j++){
                char x;
                cin>>x;
                arr[i][j]=x-'0';
            }
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int si=arr[i][j]+arr[j][n-i-1]+arr[n-i-1][n-j-1]+arr[n-j-1][i];
                ans+=min(si,4-si);
            }
        }
     
        cout<<ans/4<<endl;
    }
}