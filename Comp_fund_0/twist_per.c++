#include <bits/stdc++.h>
using namespace std;
void left(int *arr,int n,int k){
    k=k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
        vector<int>v;
        int ans[n-1];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<int>v1;
        // for(int i=0;i<n;i++){
        // v1.push_back(i+1);
        // }
         for(int i=n-1;i>=0;i--){
            
            int t1;
            for( t1=0;t1<i;t1++){
                if(arr[t1]==i+1) break;
            }
            if(t1==i) t1=-1;
            ans[i]=t1+1;
            left(arr,i+1,t1+1);

         }
    
         for(int j=0;j<n;j++){
             cout<<ans[j]<<" ";
         }
          cout<<endl;
    }
}

