#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b==0)return a;
    return gcd(b, a % b);   
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long a,b;
        cin >> a>>b;

        while(gcd(a,b)>1){
            b/=(gcd(a,b));
        }

        if(b<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       
    }
}