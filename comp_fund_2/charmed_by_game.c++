#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin >> n>>m;

       int d=abs(n-m)/2;
        int f=(n+m)%2==0?1:0;
        int val=1+(n+m-2*d)/(f+1);

        cout<<val<<endl;
        for(int i=d;i<=(n+m-d);i+=(f+1)){
            cout<<i<<" ";
        }
        cout<<endl;
       
    }
}