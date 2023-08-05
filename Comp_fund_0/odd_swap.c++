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

        vector<int>even;
        vector<int>v1;
        vector<int>v2;
        vector<int>odd;
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0){
               v1.push_back(arr[i]);
                even.push_back(arr[i]);
            }
            else 
            {
               v2.push_back(arr[i]);
                odd.push_back(arr[i]);
            }
        }
        int f=0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1!=even || v2!=odd) f=1;
             if(f==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}