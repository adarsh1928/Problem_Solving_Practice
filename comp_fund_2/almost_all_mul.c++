// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n, x;
//         cin >> n >> x;

//         vector<int> v;

//         if (n % x != 0)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             vector<int> ans(n + 1, -1);

//             for (int i = 0; i <= n; i++)
//             {

//                 ans[i] = i;
//             }
//             ans[1] = x;
//             ans[x] = n;
//             ans[n] = 1;
//             for(int i=2;i<n;i++){

//                 if(i==x){
//                     int j=2*i;
//                     while(n%j!=0 && j<n){
//                         j+=i;
//                     }
//                     if(n%j==0 && j<n){
//                         swap(ans[i],ans[j]);
//                         x=j;
//                     }
//                 }
//             }
//             for(int i=1;i<=n;i++){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;
//         }

//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v;

        vector<int> vis(1e6, -1);
        if (n % x != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            v.push_back(x);
            vis[x] = 1;

            int f = 0;

            for (int i = 2; i < n; i++)
            {

                int j = i;
                int f1 = 0;
                if (i < x)
                {
                    v.push_back(i);
                }
                else
                {
                    if (j % x == 0)
                    {
                        if (vis[j] == -1)
                        {
                            vis[j] = 1;
                            v.push_back(j);
                        }
                        else
                        {
                            while (vis[j] != -1 || n % j != 0)
                            {
                                j += i;
                            }
                            vis[j] = 1;

                            v.push_back(j);
                        }
                    }
                    else v.push_back(i);
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << 1 << endl;
        }
    }
}