#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> v;

        for (int i = 0; i < k; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        long long free = (n * m) - 2;
        long long req = k;
        bool f = true;
        map<long long, bool> mp;
        for (int i = 0; i < k; i++)
        {
            if (v[i] == req)
            {
                if (free >= 2)
                {
                    req--;
                    while (mp[req])
                    {
                        req--;
                        free++;
                    }
                }
                else{
                    f=false;
                    break;
                }
            }
            else
            {
                mp[v[i]] = true;
                free--;
            }
        }
        if (f)
        {
            cout << "YA\n";
        }
        else
            cout << "TIDAK\n";
    }
}
