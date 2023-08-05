// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

// void fun()
// {

// }

//  vector<int> spiralOrder(vector<vector<int>>& mat) {
//         int n=mat.size();
//         int m=mat[0].size();
        
//         vector<int>v;
        
//         int i=0;
//         int j=0;
        
//         int f1=1;
//         int f2=0;
        
//         int ki=0;
//         int kj=0;
        
//         while((i+1)%n <n && (j+1)%m<m && v.size()<n*m){
//             if(f1==1 && f2==0){
//                 while(j<m-ki){
//                    if(v.size()<n*m) v.push_back(mat[i][j]);
//                     j++;
//                 }
//                 i++;
//                 j--;
//                 f2=1;
//                 f1=0;
//                 ki++;
//             }
//             if(f2==1 && f1==0){
//                 while(i<n-kj){
//                  if(v.size()<n*m)   v.push_back(mat[i][j]);
//                     i++;
//                 }
//                 j--;
//                 i--;
//                 f1=1;
//                 f2=-1;
//                 kj++;
//             }
//              if(f2==-1 && f1==1){
//                 while(j+1>=ki){
//                  if(v.size()<n*m)   v.push_back(mat[i][j]);
//                     j--;
//                 }
//                 j++;
//                 i--;
//                 f2=1;
//                 f1=-1;
//             }
//              if(f2==1 && f1==-1){
//                 while(i>=ki){
//                 if(v.size()<n*m)    v.push_back(mat[i][j]);
//                     i--;
//                 }
//                i++;
//                 j++;
//                 f1=1;
//                 f2=0;
//             }
//         }
//  }
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        // fun();

        ll n;
        cin >> n;

        ll v[n][n];

        ll l = 1;
        ll h = n * n;

        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (ll j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                        v[i][j] = l++;
                    else
                        v[i][j] = h--;
                }
            }
            else
            {
                for (ll j = n - 1; j >= 0; j--)
                {
                    if (j % 2 == 0)
                    {
                        v[i][j] = h--;
                    }
                    else
                        v[i][j] = l++;
                }
            }
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}