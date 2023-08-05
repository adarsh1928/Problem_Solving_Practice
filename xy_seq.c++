#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,b,x,y;
        cin >> n >> b>> x>>y;

        vector<int>v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++){
            if((v[i-1]+x)>b){
                v[i]=v[i-1]-y;
            }
            else{
                v[i]=v[i-1]+x;
            }
        }
        long long sum1=0;
        for(int i=1;i<=n;i++){
            sum1+=v[i];
        }
        cout<<sum1<<endl;
    }
}