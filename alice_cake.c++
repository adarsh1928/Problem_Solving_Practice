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

        long long arr[n];
        map<long long,long long>m;
        long long sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1+=arr[i];
            m[arr[i]]++;
        }
        priority_queue<long long>pq;
        pq.push(sum1);
        while(pq.size()<n){
                 long long top1=pq.top();
                 pq.pop();

                 long long x1=top1/2;  long long x2=(top1+1)/2;
                 if(m.count(x1)) m[x1]--,n--;
                 else pq.push(x1);
                 if(m[x1]==0) m.erase(x1);

                 if(m.count(x2)) m[x2]--,n--;
                 else pq.push(x2);
                 if(m[x2]==0) m.erase(x2);

        }
        if(n==1 || pq.size()==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}