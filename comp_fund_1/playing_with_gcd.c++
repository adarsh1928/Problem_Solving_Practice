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

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        int f=0;

        vector<int>b;
       

        for(int i=0;i<n-2;i++){
            int val=__gcd(v[i],v[i+2]);
            int val2=__gcd(v[i],v[i+1]);

            if(val>val2){
                f=1;
                break;
            }
        }
        if ((f) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}