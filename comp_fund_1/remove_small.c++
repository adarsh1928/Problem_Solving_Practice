#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

       

        string s;
        cin >> s;

        vector<long long> v1;
        
        long long res=0;

        vector<long long>vis(n+1,false);
        int f=0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v1.push_back(i + 1);
            }
            else f=1;
        }
        if(v1.size()==0){
            cout<<"0"<<endl;
        }
        else if(f==0){
            cout<<n<<endl;
        }
        else{
            for(long long i=0;i<v1.size();i++){
                long long f=0;
                long long cnt=1;
                while(f==0){
                    long long val=cnt*v1[i];
                    auto find1=binary_search(v1.begin(),v1.end(),val);
                    if(!find1){
                         f=1;
                         break;
                    }
                     if(!vis[val]){
                        res+=v1[i];
                    }
                    vis[val]=true;
                    cnt++;
                }
            }
        cout<<res<<endl;
        }

    }
}