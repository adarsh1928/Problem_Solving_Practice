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

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < n - 1; i+=2)
            {
                if (v[i] == v[i + 1])
                {
                    cnt++;
                }
                else
                {
                    cnt += 2;
                }
            }
            cout<<cnt<<endl;

            for(int i=0;i<n-1;i+=2){
                if(v[i]==v[i+1]){
                    cout<<(i+1)<<" "<<(i+1+1)<<endl;
                }
                else 
                {
                    cout<<(i+1)<<" "<<(i+1)<<endl;
                    cout<<(i+1+1)<<" "<<(i+1+1)<<endl;
                }
            }
        }
    }
}