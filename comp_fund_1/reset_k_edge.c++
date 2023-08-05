#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin >> n>>k;

        vector<int> v;
        v.push_back(1);
        v.push_back(1);

        for (int i = 2; i <= n; i++)
        {

            int x;
            cin >> x;
           
            v.push_back(x);
        }
        int l=-1;
        while(k>0 && v.size()>0){
            l=v.back();
            v.pop_back();
            k--;
        }

        if(v.size()==0 ){
            cout<<"1"<<endl;
        }
        else{
            // int val=v.back();
            // v.pop_back();
            if(l==v.back()){
               cout<<v.back()<<endl;
            }
            else cout<<l-1<<endl;
        }

    }
}