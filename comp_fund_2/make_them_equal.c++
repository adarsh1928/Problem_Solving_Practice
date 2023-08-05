#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        char ch;
        cin >> ch;

        string s;
        cin >> s;

        vector<long long> v;
        int in=-1;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] != ch)
                v.push_back(i + 1);

                else in=i+1;
        }
        if(v.size()==0)
        {
            cout<<0<<endl;
        }
        else if(in>n/2) {
            cout<<1<<endl;
            cout<<in<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        
    }
}