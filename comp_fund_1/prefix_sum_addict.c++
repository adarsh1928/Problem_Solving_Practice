#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin >> n>>k;

        vector<int> v;

        for (int i = 0; i < k; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
     
        int f = 0;
        vector<int>v1;

        int x=n-k+1;
        if(v[0]<=0){
            v1.push_back(v[0]/x);
        }
        else{
            int t=v[0]/x;
            if(v[0]%x!=0){
                t++;
            }
            v1.push_back(t);
        }
        for (int i = 1; i < k; i++)
        {

          v1.push_back( v[i] - v[i - 1]);

        }
        for(int i=1;i<k;i++){
            if(v1[i]<v1[i-1]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}