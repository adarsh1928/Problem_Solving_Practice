#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < int(n); i++) 

int main(){
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        forn(i, n) scanf("%d", &a[i]);
        long long ans = 1e18;
        int mx = *max_element(a.begin(), a.end());
        for (int x : {mx, mx + 1}){
            long long cnt1 = 0, cnt2 = 0;
            forn(i, n){
                cnt2 += (x - a[i]) / 2;
                cnt1 += (x - a[i]) % 2;
            }
            long long dif = max(0ll, cnt2 - cnt1 - 1) / 3;
            cnt1 += dif * 2;
            cnt2 -= dif;
            ans = min(ans, max(cnt1 * 2 - 1, cnt2 * 2));
            if (cnt2 > 0){
                cnt1 += 2;
                --cnt2;
                ans = min(ans, max(cnt1 * 2 - 1, cnt2 * 2));
            }
        }
        printf("%lld\n", ans);
    }
}

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {

//         int n;
//         cin >> n;

//         int arr[n];
//         int even=0;
//         int odd=0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr,arr+n);
//         int m1=arr[n-1];
//         for(int i=0;i<n-1;i++){
//                 int x=m1-arr[i];
//                 if(x%2==0) even++;
//                 else odd++;
//         }
//         int ans=INT_MAX;
//         if(odd>even) ans=2*odd-1;
//         else{
//             int y=even-odd;
//             if(y%3==0 || y%3==1){
//                 ans=2*(even-y/3);
//             }
//             else{
//              ans=2*(even-y/3)-1;
//             }
//         }
//       odd=0;
//       even=0;

//       m1=arr[n-1]+1;
//        for(int i=0;i<n-1;i++){
//                 int x=arr[n-1]+1-arr[i];
//                 if(x%2==0) even++;
//                 else odd++;
//         }
//         int ans1=INT_MAX;
//         if(odd>even) ans=2*odd-1;
//         else{
//             int y=even-odd;
//             if(y%3==0 || y%3==1){
//                 ans1=2*(even-y/3);
//             }
//             else{
//              ans1=2*(even-y/3)-1;
//             }
//         }
//        cout<<min(ans,ans1)<<endl;

//     }
// }