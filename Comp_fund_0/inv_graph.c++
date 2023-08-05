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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    //     int cnt = 0;
    //     vector<bool> visited(n, false);
    //     queue<pair<int,int>> q;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (visited[arr[i]] == false)
    //         {
    //             visited[arr[i]] = true;
    //                 q.push({arr[i],i});
    //             while (!q.empty())
    //             {
    //                 int temp = q.front().first;
    //                 int temp2=q.front().second;
    //                 q.pop();
    //                 for (int j = 0; j < n; j++)
    //                 {
    //                     if(j<temp2 && arr[j]>temp && visited[arr[j]]==false){
    //                         q.push({arr[j],j});
    //                         visited[arr[j]]=true;
    //                     }
    //                     if( j>temp2 && arr[j]<temp && visited[arr[j]]==false){
    //                         q.push({arr[j],j});
    //                         visited[arr[j]]=true;
    //                     }
    //                 }
    //             }
    //             cnt++;
    //         }
    //     }
    //     cout<<cnt<<endl;
            set<int>s;
            s.insert(0);
            int cnt=0;
            for(auto i:arr) s.insert(i*(-1));
            int max1=n;
            int maxin=n;
            int len=n;
            for(int i=n-1;i>=0;i--){
                s.erase((-1)*arr[i]);
                if(arr[i]==max1){
                    int k=(-1)*(*s.begin());
                    if(k==(maxin-(len-i))){
                       cnt++;
                       maxin=k;
                       len=k;
                       max1=k;
                    }
                    else max1=k;

                }
            }
              cout<<cnt<<endl;
    }
}