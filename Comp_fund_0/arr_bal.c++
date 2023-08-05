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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>arr2[i]){
                swap(arr[i],arr2[i]);
            }
        }
        long long sum1=0;
        for(int i=1;i<n;i++){
            sum1+=(abs(arr[i]-arr[i-1]));
        }
         for(int i=1;i<n;i++){
            sum1+=(abs(arr2[i]-arr2[i-1]));
        }
        cout<<sum1<<endl;
    }
}