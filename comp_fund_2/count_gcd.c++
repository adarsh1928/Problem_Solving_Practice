#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin >> n>>m;

        vector<int> v;
        int f=0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);

            if(i!=0){
                if(v[i-1]%v[i]!=0){
                    f=1;
                }
            }
        }
        if(f==1){
            cout<<0<<endl;
        }
        else{
            
        }
    }
}