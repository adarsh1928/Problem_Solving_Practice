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

        vector<vector<int>>vp(n,vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            int first,second;
            cin>>first>>second;

            vp[i][0]=first;
            vp[i][1]=second;
        }
        map<int,int>m1;
        map<int,int>m2;
        map<int,int>m3;
        map<int,int>m4;
        // sort(vp.begin(),vp.end());
        int f=0;
        // for(int i=0;i<n;i++){
        //     m2[vp[i][1]]=vp[i][0];
        // }
        m1.insert({vp[0][0],vp[0][1]});
        m2.insert({vp[0][1],vp[0][0]});

        for(int i=1;i<n;i++){
            if((m1.find(vp[i][0])!=m1.end())|| (m2.find(vp[i][1])!=m1.end()) ){
                if(m3.find(vp[i][0])!=m1.end() || m4.find(vp[i][1])!=m1.end()){
                    f=1;
                    break;
                }
                else {
                    m3[vp[i][0]]=vp[i][1];
                    m4[vp[i][1]]=vp[i][0];
                }
            }
            else{
                m1[vp[i][0]]=vp[i][1];
                 m2[vp[i][1]]=vp[i][0];
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
}