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
        int max1=0;

        int arr[n];
        vector<bool>visited(1e6,false);
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            max1=max(max1,arr[i]);
            visited[arr[i]]=true;
        }
      
        for(int i=1;i<=max1;i++){
               int f=0;
               for(int j=i;j<=max1;j=j+i){
                      if(visited[j]) {
                          if(f==0) f=i;
                          else f=__gcd(f,j);
                      }
               }
               if(f==i) cnt++;
        }

        cout<<cnt<<endl;
    }
}
