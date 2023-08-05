#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        for(int i=n-4;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<n-2<<" "<<n-3<<" "<<n-1<<" "<<n<< endl;
        
    }
}




