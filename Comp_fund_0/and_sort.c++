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
        int ans=(1<<20)-1;

        for(int i=0;i<n;i++){
            if(arr[i]!=i){
               
                 ans=ans&arr[i];
                   
            }
        }
        cout<<ans<<endl;
    }
}