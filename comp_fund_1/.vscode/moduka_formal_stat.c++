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
        int arr2[n];

        int mina=INT_MAX;
        int minb=INT_MAX;
         int f=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]<mina) mina=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if(arr2[i]<minb) minb=arr2[i];
            if(arr2[i]<arr[i]) f=1;
        }
        int lim=INT_MAX;
        if(mina>minb || f==1) cout<<"NO"<<endl;
        else{
            for(int i=0;i<n;i++){
               if(arr[i]!=arr2[i] && arr2[(i+1)%n]+1<arr2[i]){
                  f=1;
                  break;
               }
            }
            if(f==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
