#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,m,x,y,d;
        cin >> n>>m>>x>>y>>d;

        int step=(n-1)+(m-1);
        int les1=min(x-1,m-y) ;
        int les2=min(n-x,y-1) ;

        if(les1<=d && les2<=d){
            cout<<"-1"<<endl;
        }
        else cout<<step<<endl;
        

     
    }
}