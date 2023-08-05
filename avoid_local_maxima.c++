// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {

//         int n;
//         cin >> n;

//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         vector<int> in;
//         vector<int> max1;
//         int prev = 0;
//         int f = 0;
//         int cnt = 0;
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
//             {
//                 cnt++;
//                 // in.push_back(i);
//                 if (i - prev <= 2 && f == 1 && in.size() >= 1)
//                 {

//                     if (max1.back() <= arr[i])
//                     {
//                         max1.pop_back();
//                         max1.push_back(arr[i]);
//                     }

//                     in.pop_back();
//                     in.push_back(i);
//                     prev = i;
//                     f = 0;
//                     cnt--;
//                 }
//                 else
//                 {
//                     max1.push_back(arr[i]);
//                     f = 1;
//                     in.push_back(i);
//                     prev = i;
//                 }
//             }
//         }
//         vector<int> ans;
//         int k = 0;
//         if (cnt != 0)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (i + 1 == in[k])
//                 {
//                     ans.push_back(max1[k]);
//                     k++;
//                 }
//                 else
//                 {
//                     ans.push_back(arr[i]);
//                 }
//             }
//         }
//         else
//         {
//             for (auto i : arr)
//             {
//                 ans.push_back(i);
//             }
//         }
//         cout<<cnt<<endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i + 1 < n; ++i) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                if (i + 2 < n) {
                    a[i + 1] = max(a[i], a[i + 2]);
                } else {
                    a[i + 1] = a[i];
                }
                ans++;
            }
        }
        cout << ans << endl;
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout<<endl;
    }
}