#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> m>>n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
         sort(arr,arr+n);
        vector<int>diff;
        for(int i=0;i<n;i++){
            if(i==n-1){
                diff.push_back(((m-arr[i])+arr[0])-1);
            }
            else{
                diff.push_back((arr[i+1]-arr[i])-1);
            }
        }
        int cnt=0;
        sort(diff.rbegin(),diff.rend());
        for(int i=0;i<diff.size();i++){
            int val=diff[i]-4*i;
            if(val>=1){
                cnt+=max(1,val-1);
            }
        }
        cout<<m-cnt<<endl;
    }
}