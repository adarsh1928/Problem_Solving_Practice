#include <bits/stdc++.h>
using namespace std;

bool fun(long long i, long long j, vector<pair<long long, long long>> &v)
{

    long long f = 0;
    for(long long k=0;k<v.size();k++){
        long long i1=v[k].first;
        long long j1=v[k].second;

        long long temp=((i-i1)*(i-i1))+((j-j1)*(j-j1));
        long long temp2=sqrt(temp);

        if((temp2*temp2)==temp){
            f=1;
            break;
        }
    }
    if(f==1) return false;
    return true;
}

int main()
{

       long long n, m;
        cin >> n >> m;

        vector<pair<long long,long long>>vp;
       
        long long min1=min(m,n);
        cout<<min1+1<<endl;
        for(int i=0;i<=min1;i++){
            cout<<i<<" "<<m-i<<endl;
        }
    }
