#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int max1 = 0;
    int min1 = 0;

    int f = 0;

    int ct1 = n;
    int mm = m;
    if ((m < 1 && n > 1) || 9 * n < m)
    {
        std::cout << -1
                  << " "
                  << -1 << endl;
    }
    else
    {

        string ss1 = "";
        while (f == 0 && m > 0)
        {
            int v1 = min(9, m);
            ss1 += (v1 + '0');
            m -= v1;
        }
        while (ss1.length() < n)
        {
            ss1 += '0';
        }

        string ss2 = ss1;
        reverse(ss2.begin(), ss2.end());

        int in1=-1;
        int i=0;
        while( i<n && ss2[i]=='0'){
            i++;
        }
        in1=i;
        if(in1!=0 && in1!=n){
            ss2[0]='1';
            ss2[in1]-=1;
        }

        std::cout << ss2 << " " << ss1 << endl;
    }
}