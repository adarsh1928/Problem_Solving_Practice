#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,k;
        cin >> n >>k;

       

        if((n+1)/2<k) {
            cout<<"-1"<<endl;
            continue;
        }
        
        vector<string>v(n,string(n,'.'));
        // memset(v,'.',sizeof(v));
            for(int i=0;i<k;i++){
              v[2*i][2*i]='R';
            }
             for(int i=0;i<n;i++){
               
                    cout<<v[i]<<endl;
                }
        }
        
    }
