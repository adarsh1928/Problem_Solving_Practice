#include <bits/stdc++.h>
using namespace std;

int main()
{
 

        int n,q;
        cin >> n>>q;

        int arr[n];
        long long sum1=0;
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[i]=arr[i];
            sum1+=arr[i];
        }
        int val=0;
        while(q--){
            int qt;
            cin>>qt;
              

            if(qt==1){
                int i,x;
                cin>>i>>x;

                i--;

                if(!m.count(i)){
                    m[i]=val;
                }
                  
                sum1-=m[i];
                m[i]=x;
                sum1+=m[i];
            }
            else{
                int x;
                cin>>x;
                sum1=(long long)x*n;
                val=x;
                m.clear();
            }

            cout<<sum1<<endl;
               

        }
    
}