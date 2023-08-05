#include <bits/stdc++.h>
using namespace std;

// bool fun(long long mid,vector<pair<long long,long long>>&vp){
//     long long cnt=mid;

//     for(long long i=0;i<vp.size();i++){

//             if(cnt>=vp[i].first){
//                 cnt+=vp[i].second;
//             }
//             else{
//                 return false;
//             }
//     }
//     return true;
// }

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<pair<long long, long long>> vp;

        for (long long i = 0; i < n; i++)
        {


            int k, max1 = 0;
            cin >> k;
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
                max1 = max(max1, x - i + 1);
            }
            vp.push_back({max1, k});
        }

        sort(vp.begin(), vp.end());
        long long prev = 0;
        long long ans = 0;

        for (auto &i : vp)
        {
            ans = max(ans, i.first - prev);
            prev += i.second;
        }

        cout << ans << endl;
    }
}