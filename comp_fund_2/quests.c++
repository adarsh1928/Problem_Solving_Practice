#include <bits/stdc++.h>
using namespace std;

bool fun(long long mid,long long d,vector<long long>&pref,long long n,long long c){

    long long repeat=d/(mid+1);
    long long rem=d%(mid+1);

    long long val=pref[min(n-1,mid)]*repeat;
    if(rem>0){
        val+=pref[min(n-1,rem-1)];
    }
 if(val>=c){
    return true;
 }
 return false;

}
int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, c, d;
        cin >> n >> c >> d;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        sort(v.begin(), v.end(),greater<long long>());
        long long summ=0;
        vector<long long>pref(n);
        pref[0]=v[0];
        for(long long i=1;i<n;i++){
            pref[i]=pref[i-1]+v[i];
        }

        long long l = 0;
        long long h = d;
        long long ans = 0;

        if ( pref[min(d-1,n-1)] >= c)
        {
            cout << "Infinity" << endl;
        }
        else if((pref[0]*d)<c){
            cout<<"Impossible"<<endl;
        }
        else
        {

            while (l <= h)
            {
                long long mid = (l + h) / 2;

                if(fun(mid,d,pref,n,c)){
                    ans=mid;
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }  
            }
             cout<<ans<<endl;
        }
    }
}