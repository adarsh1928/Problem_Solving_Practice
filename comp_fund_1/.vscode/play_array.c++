#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n,m;
        cin >> n>>m;

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long k;
        cin>>k;
        long long arr2[k];

          for (long long i = 0; i < k; i++)
        {
            cin >> arr2[i];
        }

        vector<pair<long long,long long>>vpa{{0,0}};
        vector<pair<long long,long long>>vpb{{0,0}};

        for(long long i=0;i<n;i++){
            long long cnt=1;

            while(arr[i]%m==0){
                cnt*=m;
                arr[i]/=m;
            }

            if(vpa.back().first==arr[i]){
                vpa.back().second+=cnt;
            }
            else{
                vpa.push_back({arr[i],cnt});
            }
        }
      
        for(long long i=0;i<k;i++){
            long long cnt=1;

            while(arr2[i]%m==0){
                cnt*=m;
                arr2[i]/=m;
            }

            if(vpb.back().first==arr2[i]){
                vpb.back().second+=cnt;
            }
            else{
                vpb.push_back({arr2[i],cnt});
            }
        }
        if(vpa==vpb) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}