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

        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        vector<int>v1(n);
        vector<int>v2(n);

        int h=n-1;
        vector<int>list;
        
        for(int i=n-1;i>=0;i--){
            while(h>=0 && arr2[h]>=arr[i]){
                list.push_back(arr2[h]);
                h--;
            }
            v1[i]=list.back()-arr[i];
            v2[i]=list.front()-arr[i];

            int cnt1=n-i;
            int cnt2=n-(h+1);

            if(cnt1==cnt2){
                list.clear();
            }
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}