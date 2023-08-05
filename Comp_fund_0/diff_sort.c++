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
        vector<vector<int>>v;

        vector<int>v1;
       int cnt=0;
       int f=0;
       int f1=0;
       for(int i=1;i<n;i++){
          if(arr[i-1]>arr[i]) f1=1;
       }
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i+1] && arr[i]>=arr[i+2] && arr[i+1]<arr[i+2]){
                v1.push_back(i);
                v1.push_back(i+1);
                v1.push_back(i+2);
                f=1;
                cnt++;
                v.push_back(v1);
                v1.clear();
            }
        }
        if(f1==0 && f==1){
            cout<<cnt<<endl;

        }
    }
}