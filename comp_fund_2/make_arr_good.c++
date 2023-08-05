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

        vector<long long> v;
        long long min1 = 1e9;
        long long freq = 0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            min1 = min(min1, x);
        }
        long long cnt = 0;
        vector<pair<long long, long long>> vp;
        for (long long i = 0; i < n; i++)
        {
            long long cnt=1;
            while(cnt<=v[i]){
                cnt=cnt*2;
            }
            long long sub=cnt-v[i];
           vp.push_back({i+1,sub});
            
        }
        cout<<vp.size()<<endl;
        for(auto &i:vp){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}