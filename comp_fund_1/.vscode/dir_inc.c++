#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200010];

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        long long arr[n];
        long long pos = 0;
        long long neg = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while(n-1 && arr[n-1]==0) n--;
        long long f = 0;
            long long f1 = 0;
            long long i;
        for ( i = 0; i < n; i++)
        {
            pos += arr[i];
            if (pos <= 0)
            {
                f = 1;
                break;
            }
           
        }
        
       if(pos!=0 || i<n-1 ) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    

    }
}