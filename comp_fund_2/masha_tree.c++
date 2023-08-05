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
        int cnt = 0;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            int f=0;

            for (int level = 1; level < n; level *= 2)
            {
                for (int i = 0; i < n; i += 2 * level)
                {
                    if(abs(v[i]-v[i+level])!=level){
                        f=1;
                    }
                    if(v[i]>v[i+level]){
                        cnt++;
                        swap(v[i],v[i+level]);
                    }
                }
            }
            if(f==1) cout<<-1<<endl;
            else cout<<cnt<<endl;
        }
    }
}