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
            arr[i]=i+1;
        }
        // int x=(n+(n-1))/2;
        // if(x%2!=0) x=x+1;
        if(n==2) {
           cout<<"2"<<endl;
           cout<<"1"<<" "<<"2"<<endl;
        }
        else{
        int x=n-1;
        int y=n-2;
        int v[n-1][2];
        int j=0;
        cout<<"2"<<endl;
        while(y>=0){
           
            // v[j][0]=arr[y];
            // v[j][1]=arr[x];
            cout<<arr[y]<<" "<<arr[x]<<endl;
               int temp=(arr[x]+arr[y])/2;
            if((arr[x]+arr[x-1])%2!=0) temp=temp+1;
            arr[y]=temp;
            j++;
            y--;
            x--;
          
          
        }
        // cout<<(v[n-1][0]+v[n-1][1])/2<<endl;
        // for(int i=0;i<n;i++){
        //     for(int k=0;k<2;k++){
        //         cout<<v[i][k]<<" ";
        //     }
        //     cout<<endl;
        // }
        }
    }
}