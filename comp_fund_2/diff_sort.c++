#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        int f = 0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                f=1;
                break;
            }
        }
        if (f==0)
        {
            cout << 0 << endl;
        }

        else if ((v[n - 2] > v[n - 1]) || (v[n-1]<0))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (n - 2) << endl;
            for (int i = 0; i < n - 2; i++)
            {
                cout << (i + 1) << " " << (n - 1) << " " << n << endl;
            }
        }
    }
}