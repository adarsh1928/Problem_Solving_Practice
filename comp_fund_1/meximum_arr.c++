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

        vector<long long> cnt(200001, 0);
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            cnt[v[i]]++;
        }
        vector<bool> vis(200001, false);
        vector<long long> b;

        long long j = 0;
        long long mex = 0;

        for (long long i = 0; i < n; i++)
        {

            if (v[i] == mex)
            {
                vis[v[i]] = true;
                cnt[v[i]]--;

                while (vis[mex] == true)
                {
                    mex++;
                }
                if (cnt[mex] == 0)
                {
                    b.push_back(mex);
                    mex = 0;
                    for (long long k = i; k >= j; k--)
                    {
                        vis[v[k]] = false;
                    }
                    j = i + 1;
                }
            }else if(cnt[mex]==0){
                b.push_back(mex);
                mex=0;
                cnt[v[i]]--;
                j=i+1;
            }else{
                cnt[v[i]]--;
                vis[v[i]]=true;
            }
        }
        if(j!=n){
            b.push_back(mex);
        }
        cout<<b.size()<<endl;
        for(auto i:b){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}