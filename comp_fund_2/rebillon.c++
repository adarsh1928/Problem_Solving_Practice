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

        int cnt0=0;
        int cnt1=0;
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            if(x==1) cnt1++;
            else cnt0++;
        }

        int ans=0;

        int cntt1=0;
        int cntt2=0;

        for(int i=0;i<cnt0;i++){
           if(v[i]!=0) cntt1++;
        }
        for(int j=cnt0;j<n;j++){
            if(v[j]!=1){
               cntt2++;
            }
        }
        ans=min(cntt1,cntt2);
        cout<<ans<<endl;
    }
}