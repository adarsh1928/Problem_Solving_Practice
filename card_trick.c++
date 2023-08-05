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
        int m;
        cin>>m;
       long long sum1=0;
        int arrb[m];
        for(int i=0;i<m;i++){
            cin>>arrb[i];
            sum1+=arrb[i];
        }
        int x=sum1%(n);

        cout<<arr[x]<<endl;
    }
}