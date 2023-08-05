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

        vector<int> v1;
        vector<int> v2;

        int cnt10=0;
        int cnt11=0;
        int cnt20=0;
        int cnt21=0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v1.push_back(x);
            if(x==0) cnt10++;
            else cnt11++;
        }
          for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v2.push_back(x);
            if(x==0) cnt20++;
            else cnt21++;
        }
        int ans=0;
        int val1=abs(cnt11-cnt21);
        int val2=abs(cnt10-cnt20);

        int min1=min(val1,val2);

        int cnt=0;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                cnt++;
            }
        }
        if(cnt==min1){
            cout<<min1<<endl;
        }
        else cout<<min1+1<<endl;


    }
}