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

        map<string,long long int>m;
        vector<string>v;
        map<long long int,long long int>mv1,mv2;
        for (long long i = 0; i < n; i++)
        {
            string temp;
            cin>>temp;
            v.push_back(temp);
           
        }
        long long int extra=0;
    
        long long int cnt=0;
            for(int i=0;i<n;i++){
                cnt+= mv1[v[i][0]] +  mv2[v[i][1]]-2*m[v[i]];
                mv1[v[i][0]]++;
                mv2[v[i][1]]++;
                m[v[i]]++;
            }
        cout<<cnt<<endl;
        }
        
    }





