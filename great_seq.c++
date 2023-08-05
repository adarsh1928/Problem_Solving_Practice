#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n,x;
        cin >> n>>x;

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<long long,long long>m;
        for(auto i:arr){
            m[i]++;
        }
        sort(arr,arr+n);
        long long cnt=0;
        for(long long i=0;i<n;i++){
        if(m[arr[i]]==0) continue;
            long long val=arr[i]*x;
                if(m.find(val)==m.end()){
                    cnt++;
                }
                else {
                    m[val]--;
                }
                m[arr[i]]--;
        if(m[val]==0) m.erase(val);
        if(m[arr[i]==0]) m.erase(arr[i]);
        }
        cout<<cnt<<endl;
    }
}