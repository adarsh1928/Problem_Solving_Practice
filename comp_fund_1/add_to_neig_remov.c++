#include <bits/stdc++.h>
using namespace std;

int fun(int i, int sum1,int n,vector<int>v)
{
    int sum2 = 0;
    int f1 = 0;
    int cnt = 0;
    int k=i;

    for (int j = i ; j < n; j++)
    {
        sum2 += v[j];
        if (sum2 == sum1)
        {
            cnt += (j - k);
            sum2 = 0;
            k = j + 1;
        }
        else if (sum2 > sum1)
        {
            return -1;
        }
    }

    if(sum2>0) {
        return -1;
    }

    return cnt;
}

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

        int sum1 = 0;
        int min1 = n-1;
        for (int i = 0; i < n; i++)
        {
            sum1 += v[i];

            int val=fun(i+1,sum1,n,v);


            if(val!=-1){
                min1=min(min1,val+i);
            }
        }

        cout << min1 << endl;
    }
}