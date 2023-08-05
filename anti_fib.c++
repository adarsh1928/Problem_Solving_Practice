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

        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i]=i+1;
        }
        vector<vector<int>>v;
        vector<int>v2(arr.begin(),arr.end());
        
        int k2=2;
        int k1;
        if(n==3){
           k1=1;
        }
        else k1=0;
        while(k2<n){
            swap(v2[k1],v2[k2]);
            k1++;
            k2++;
        }
        v.push_back(v2);
        reverse(arr.begin(),arr.end());
        v.push_back(arr);
        int i=2;

        while(i<n){
              swap(arr[1],arr[i]);
              v.push_back(arr);
              i++;
        }
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout<<v[i][j]<<" ";
           }
           cout<<endl;
       }

    }
}