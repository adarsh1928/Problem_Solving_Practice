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

        if (n < 4)
        {
            cout << "-1" << endl;
        }
        else if(n==4){
            cout<<"3 1 4 2"<<endl;
        }
        else
        {
           for(int i=1;i<=n;i+=2) cout<<i<<" ";
           for(int i=2;i<=n;i+=2) cout<<i<<" ";
            cout<<endl;
        }
    }
}