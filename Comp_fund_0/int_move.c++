#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n1,n2;
        cin >> n1>>n2;

        long long temp=(n1*n1)+(n2*n2);
        int t=sqrt(temp);
       int f;
       if(n1==0 && n2==0) cout<<"0"<<endl;
       else if(t*t==temp) cout<<"1"<<endl;
        else cout<<"2"<<endl;

       
    }
}