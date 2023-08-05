#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        map<int, int> m1;
        map<int, int> m2;

        vector<int> prev(100005, 0);
        int max1=0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            m1[x]++;
            if(max1<m1[x]){
                max1=m1[x];
            }
        }
        if(max1<k)  k=max1;
        vector<int>vis(100001,0);
        for (int i = 0; i < n; i++)
        {

            if (m2.count(v[i]))
            {
                int f = 0;
                if (prev[v[i]] == k)
                {
                    cout << "0"
                         << " ";
                         f=1;
                }
               else if (f == 0)
                {
                    // prev[v[i]] = prev[v[i]] + 1;

                    int ff1=-1;
                  if(vis[v[i]]<=k)  cout << prev[v[i]]+1 << " ",prev[v[i]]++;
                  else{
                       cout<<"0"<<endl;
                  }
                }
            }
            else
            {
                m2[v[i]]++;
                prev[v[i]]=1;
                vis[v[i]]++;
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}