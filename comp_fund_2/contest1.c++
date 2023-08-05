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

        n=2*n;

        vector<int> v;
        map<int,int>m;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            m[x]++;
        }
        int f=0;
        for(auto &i:m){
             if(i.second>(n/2)){
                f=1;
                break;
             }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}