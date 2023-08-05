#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, U, R, D, L;
        cin >> n >> U >> R >> D >> L;

        int f=0;

        for (int i = 0; i <= 16; i++)
        {

            int d = D;
            int u = U;
            int l = L;
            int r = R;

            if(i&1){
                u-=1;
                l-=1;
            }
            if(i&2){
                l-=1;
                d-=1;
            }
            if(i&4){
                d-=1;
                r-=1;
            }
            if(i&8){
                r-=1;
                u-=1;
            }

            if(min({l,r,u,d})>=0 && max({u,r,d,l})<=n-2) {
                f=1;
                break;
            }
        }
     
        if (f == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}