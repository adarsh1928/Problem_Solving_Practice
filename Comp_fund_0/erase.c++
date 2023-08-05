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

        int arr[n+1];
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }
        int max1=arr[0];
        int prev=arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]>max1){
                max1=arr[i+1];
            }
        }
    }
}