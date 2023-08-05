#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    vector<pair<long long, long long>> v;
    // long long max1 = 0;

    for (long long i = 0; i < n; i++)
    {

        long long ori, dir;
        cin >> ori >> dir;

        v.push_back({ori, dir});
        
    }
    long long max1 = 0; 
    sort(v.begin(), v.end());
    for (long long i = 0; i < n; i++)
    {
       if(v[i].second<max1) max1=v[i].first;
       else max1=v[i].second;
    }

    cout<<max1<<endl;
   
}
