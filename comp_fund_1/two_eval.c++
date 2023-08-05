#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    while (T--)
    {
        int a,b,c;
        cin >> a>>b>>c;

        int diff1=(a-1);
        int diff2;
        if(b>=c){
           diff2=(b-1);
        }
        else diff2=(c-b)+(c-1);

        if(diff1<diff2){
            cout<<"1"<<endl;
        }
        else if(diff2<diff1) cout<<"2"<<endl;
      else
            cout<<"3"<<endl;
       
    }
}