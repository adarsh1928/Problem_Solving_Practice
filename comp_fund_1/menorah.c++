#include <bits/stdc++.h>
using namespace std;

long long operation(string a,string b){

    long long cnt10=0;
    long long cnt01=0;

    if(a==b) return 0;

    for(long long i=0;i<a.length();i++){
        if(a[i]=='1' && b[i]=='0') cnt10++;
        else if(a[i]=='0' && b[i]=='1') cnt01++;
    }

    if(cnt10!=cnt01) return 1e18;
    else return cnt10+cnt01;
}

long long change(string a,string b, char ch){
        long long in=-1;
        for(long long i=0;i<a.length();i++){
            if(a[i]=='1' && b[i]==ch){
                in=i;
                break;
            }
        }
        if(in==-1) return 1e18;

        for(long long j=0;j<a.length();j++){

            if(j==in) continue;
            if(a[j]=='1') a[j]='0';
            else a[j]='1';
        }

        return operation(a,b);
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        string a,b;
        cin>>a;
        cin>>b;

        long long ans=operation(a,b);
        ans=min(ans,1+(change(a,b,'1')));
        ans=min(ans,1+(change(a,b,'0')));

        if(ans==1e18) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
}