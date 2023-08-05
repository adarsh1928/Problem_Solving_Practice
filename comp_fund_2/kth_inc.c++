#include <bits/stdc++.h>
using namespace std;

bool fun(vector<long long>&v,int n){
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]) return false;
    }

    return true;
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }

       if(k%2!=n%2) cout<<"YES"<<endl;
       else if(k%2==1){
        if(k==n){
            if(fun(v,n)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
       }
       else{
         if(k==n){
            if(fun(v,n)){
                cout<<"YES"<<endl;
                
            }
            else cout<<"NO"<<endl;
         }
         else{
            int cnt=0;
            for(int i=0;i<n/2;i++){
                cnt+=(abs(v[i]-v[n-i-1]));
            }
            if(cnt%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }
       }

    }
}