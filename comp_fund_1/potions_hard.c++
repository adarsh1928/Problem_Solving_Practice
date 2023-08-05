#include <bits/stdc++.h>
using namespace std;

int main()
{

   
        long long n;
        cin >> n;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        long long sum1 = 0;
        long long cnt = 0;

        long long f = 0;
        for (long long i = 0; i < n; i++)
        {

            sum1 += v[i];
            cnt++;
            if (v[i] < 0)
                pq.push(v[i]);

            while (sum1 < 0 && pq.size() > 0)
            {
                sum1 += abs(pq.top());
                pq.pop();
                cnt--;
            }
            if(sum1<0 && pq.size()==0){
                f=1;
                break;
            }
        }
        cout<<cnt<<endl;
    
}