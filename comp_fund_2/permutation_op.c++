#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v;

        map<int,int>m;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            m[x]=i+2;
        }
        for(int i=1;i<=n;i++){
             cout<<min(m[i],n)<<" ";
        }
        cout<<endl;
    }
}