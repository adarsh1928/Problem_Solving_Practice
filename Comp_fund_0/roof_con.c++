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

       int ht=log2(n-1);
       int start=1<<ht;

       for(int i=n-1;i>=start;i--){
           cout<<i<<" ";
       }
       for(int i=0;i<start;i++){
           cout<<i<<" ";
       }
      cout<<endl;
    }
}