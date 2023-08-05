#include <bits/stdc++.h>
using namespace std;

    int fun(int num){
        int cnt=0;
        while(num>=1){
            num=num/10;
            cnt++;
        }
        return cnt;
    }
int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        vector<int>a;
        vector<int>b;
       
        priority_queue<int>pq1,pq2;
    
        for (long long i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            pq1.push(x);
           
        }
        for (long long i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            pq2.push(x);
           
        }
        long long ans=0;
        while(!pq1.empty() && !pq2.empty()){
            int top1=pq1.top();
            int top2=pq2.top();

            if(top1==top2){
                pq1.pop();
                pq2.pop();
            }
           else if(top1>top2){
                pq1.pop();
                ans++;
                pq1.push(fun(top1));
            }
            else{
                pq2.pop();
                ans++;
                pq2.push(fun(top2));
            }
        }
      
         cout<<ans<<endl;
        
    }
}




