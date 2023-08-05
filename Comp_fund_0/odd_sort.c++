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
        vector<int>arre;
        vector<int>arro;
        vector<int>v1;
        vector<int>v2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i=0;
        int j=0;
        for(int k=0;k<n;k++){
            if(arr[k]%2==0){
                arre.push_back(arr[k]);
                v1.push_back(arr[k]);
            }
            else {
                arro.push_back(arr[k]);
                v2.push_back(arr[k]);
            }
        }
        
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       
       if(v1==arre && v2==arro) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
}