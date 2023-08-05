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
       
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
          
        }
        sort(v.begin(),v.end());

        int ans=n;

        for(int i=0;i<n/2;i++){
            int first=i;
            int sec=first+ ((n+1)/2);

            if(v[first]!=v[sec]) ans-=2;
        }

        cout<<ans<<endl;

    }
}