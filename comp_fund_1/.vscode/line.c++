#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        vector<long long>ans(n+1);
        string s;
        cin>>s;

        long long val1=0;
        vector<long long>r;
        vector<long long>l;
        vector<long long>v;
        for(long long i=n;i>=1;i--){
            if(s[i-1]=='L'){
                val1+=(i-1);
                    v.push_back((n-i)-(i-1));
            }
            else{
               val1+=(n-i);
                    v.push_back((i-1)-(n-i));
            }
        }
        sort(v.begin(),v.end(),greater<long long>());
        long long sum1=val1;
        for(long long i=1;i<=n;i++){
           if(v[i-1]>0) sum1+=v[i-1];
           cout<<sum1<<" ";
           
        }
       
         cout<<endl;
    }
}