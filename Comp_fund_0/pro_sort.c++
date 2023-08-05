#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

         int n;
        cin>>n;
        int arr1[n+3],arr2[n+3];
        for(int i=1;i<=n;i++)cin>>arr1[i];
        for(int i=1;i<=n;i++)cin>>arr2[i];
        vector<pair<int,int> >vp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr1[j]>arr1[j+1] || arr2[j]>arr2[j+1])
                {
                    swap(arr1[j],arr1[j+1]);
                    swap(arr2[j],arr2[j+1]);
                    vp.push_back({j,j+1});
                }
            }
        }
        int an=0;
        for(int i=1;i<n;i++)
        {
            if(arr1[i]>arr1[i+1] || arr2[i]>arr2[i+1])
            {
                an=-1;
                break;
            }
        }
        if(an!=0)cout<<-1<<endl;
        else
        {
            cout<<vp.size()<<endl;
            for(int i=0;i<vp.size();i++)cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
    }
