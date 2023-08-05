#include <bits/stdc++.h>
using namespace std;

long long match(string s1,string s2){
    long long n=s1.length();
    long long m=s2.length();

    long long max1=0;
    long long j=0;
    long long cnt=0;
    for(long long i=0;i<m;i++){
        if(j<n && s1[j]==s2[i]){
            j++;
        }
    }
    cnt+=(n+m-2*j);

    return cnt;
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        string n;
        cin >> n;

        long long ans=21;

        // vector<string> v;
        for(long long i=0;i<=60;i++){
            long long val=(1LL<<i);
            string temp=to_string(val);
            long long val1=match(temp,n);
            ans=min(ans,val1);
        }
       cout<<ans<<endl;
        
    }
}