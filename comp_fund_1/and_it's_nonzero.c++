#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int l,r;
        cin >> l>>r;

        vector<int> v;
        int min1=INT_MAX;
        

        for(int i=31;i>=0;i--){
               int cnt=0;
               for(int j=l;j<=r;j++){
                      
                   if((j & (1<<i))==0){
                        cnt++;
                   }    
               }
               min1=min(min1,cnt);
        }
        cout<<min1<<endl;
    }
}