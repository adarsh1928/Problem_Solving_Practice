#include <bits/stdc++.h>
using namespace std;

int main()
{
    
        int n;
        cin >> n;

        int arr[n];
        int max1=0;
        int f=0;
        int prev;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i==0) prev=arr[0];
             else if(prev>arr[i]) f=1;
             prev=arr[i];
            max1=max(max1,arr[i]);
        }
        if(f==0) cout<<n-1<<endl;
        else{
    vector<int>freq;
    for(int i=0;i<n;i++){
          if(arr[i]==max1) freq.push_back(i);
    }   
    int temp=freq[freq.size()/2];
    int prev;
    int cnt1=0;
    int cnt2=0;
    for(int i=temp-1;i>=0;i--){
        if(i==temp-1){
            prev=-arr[i];
            cnt1++;
        }
        else if(prev>-arr[i]){
            prev=-arr[i];
            cnt1++;
        }
        else if(prev<=(-arr[i])){
              while(prev<=(-arr[i])){
                  arr[i]=-(arr[i]+arr[i]);
                  cnt1++;
              }
              cnt1++;
              prev=-arr[i];
        }
    }
    int prev2;
    for(int i=temp+1;i<n;i++){
        if(i==temp+1){
            prev2=arr[i];
            cnt1++;
        }
        else if(prev2<arr[i]){
           prev2=arr[i];
           cnt1++;
        }
        else if(prev2>=arr[i]){
            while(arr[i]<=prev2){
                arr[i]=arr[i]+arr[i];
                cnt1++;
            }
            cnt1++;
            prev2=arr[i];
        }
    }
       cout<<cnt1<<endl;
        }
}