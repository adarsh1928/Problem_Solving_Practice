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
         int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=arr[i];
        }
        sort(b,b+n);
        for(int i=n-1;i>0;i-=2){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=b[i]) {
                f=1;
                break;
            }
        }
        if (f==0)
    cout << "YES"<<endl;
    else cout<<"NO"<<endl;
    }
}