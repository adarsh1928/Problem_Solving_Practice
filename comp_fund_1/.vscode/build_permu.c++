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

       int num=n+(n-1);
       vector<int>sq;

       int i=0;
       int f=0;
       while(f==0){
          if(i*i<=num) sq.push_back(i*i);
          else f=1;
          i++;
       }
       reverse(sq.begin(),sq.end());
       vector<int>visited(n,false);
       vector<int>ans(n,-1);

       int j=n-1;
       while(j>=0){
       if(ans[sq[0]-j]==-1) ans[sq[0]-j]=j,j--;
       else{
           sq.erase(sq.begin(),sq.begin()+1);
       }
       }
      
       for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
       }
       cout<<endl;
      
    }
}