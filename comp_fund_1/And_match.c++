#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int>v;

        for(int i=0;i<n;i++){

            v.push_back(i);
        }

        if(k==n-1){
             
             swap(v[n-2],v[0]);
             swap(v[1],v[n-4]);
        }
        else{
            swap(v[0],v[k]);
        }

        if (n==4 && k==3)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<n/2;i++){
                cout<<v[i]<<" "<<v[n-1-i]<<" "<<endl;
            }
            
        }
    }
}