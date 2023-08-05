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

        int arr[n];
        vector<int> pos;
        vector<int> neg;
        vector<int> v;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (f == 0 || arr[i] != 0)
                v.push_back(arr[i]);
            if (arr[i] > 0)
                pos.push_back(arr[i]);
            else if (arr[i] < 0)
                neg.push_back(arr[i]);
            else
                f = 1;
        }
        if (pos.size() > 2 || neg.size() > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            int f1 = 0;
            for (int i = 0; i < v.size(); i++)
            {
                for (int j = i + 1; j < v.size(); j++)
                {
                    for (int k = j + 1; k < v.size(); k++)
                    {
                        int f = 0;
                        for (int l = 0; l < v.size(); l++)
                        {
                            if (v[i] + v[j] + v[k] == v[l])
                            {
                                f = 1;
                            }
                        }
                        if (f == 0)
                        {
                            f1 = 1;
                            break;
                        }
                    }
                }
            }
            if(f1==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}