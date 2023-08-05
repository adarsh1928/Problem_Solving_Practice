#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> n>>m;

        int arr[n][m];
        int cnt1=0;
        for (int i = 0; i < n; i++)
        {
             string s;
            cin>>s;
            for(int j=0;j<m;j++){
                arr[i][j]=s[j]-'0';
                cnt1+=arr[i][j];
            }
        }
        int f=0;
        int ans=4;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
               int val=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
                ans=min(ans,val);
            }
        }
        if(cnt1==0) cout<<"0"<<endl;
        else{
            if(ans<3){
                cout<<cnt1<<endl;
            }
            else{
                ans-=2;
              cout<<cnt1-ans<<endl;
            }
        }
    }
}