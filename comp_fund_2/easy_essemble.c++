// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//         long long n;
//         cin >> n;

//         vector<vector<long long>>v;

//             int num;
//         for (long long i = 0; i < n; i++)
//         {

//             long long n1;
//             cin >> n1;

//             if(i==0){
//                 num=n1;
//             }

//             vector<long long>v1;

//             for(long long j=0;j<n1;j++){
//                 long long x;
//                 cin>>x;

//                 v1.push_back(x);
//             }
//             v.push_back(v1);
//         }
//         long long split=num-1;
//         // for(long long i=0;i<v.size();i++){
//         //     long long cnt=0;
//         //     for(long long j=1;j<v[i].size();j++){
//         //         if(v[i][j]<v[i][j-1]) cnt++;
//         //     }
//         //     split+=cnt;
//         // }
//         long long comb=n+split-1;

//         cout<<split<<" "<<comb<<endl;
//     }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int xyz;
    int xyz = 1;
    // cin>>xyz;
    while (xyz--)
    {
        long long n;
        cin >> n;
        vector<long long> v[n], t;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            v[i].push_back(a);
            while (a--)
            {
                long long b;
                cin >> b;
                v[i].push_back(b);
                t.push_back(b);
            }
        }
        sort(t.begin(), t.end());
        map<long long, long long> k;
        for (long long i = 0; i < t.size(); i++)
        {
            k[t[i]] = i;
        }
        long long s = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 2; j <= v[i][0]; j++)
            {
                if (k[v[i][j]] - k[v[i][j - 1]] != 1)
                {
                    s++;
                }
            }
        }
        cout << s << " " << s + n - 1;
    }
}
