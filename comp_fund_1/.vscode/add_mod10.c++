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
             int f=0;
        if(arr[0]%5==0){
            for(int i=0;i<n;i++){
                if(arr[i]%10!=0){
                    arr[i]=arr[i]+5;
                }
            }
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[i-1]){
                    f=1;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(arr[i]%10==1){
                    arr[i]+=1;
                }
                else if(arr[i]%10==3){
                    arr[i]+=9;
                }
                else if(arr[i]%10==4){
                   arr[i]+=18;
                }
                else if(arr[i]%10==6){
                    arr[i]+=6;
                }
                else if(arr[i]%10==7){
                    arr[i]+=25;
                }
                else if(arr[i]%10==8){
                    arr[i]+=14;
                }
                else if(arr[i]%10==9){
                    arr[i]+=23;
                }
            }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])%20!=0){
               f=1;
               break;
            }
        }
        }
       
        if(f==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}