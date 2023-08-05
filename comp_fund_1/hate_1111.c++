#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    // vector<int>num={11,111,11111,111111,1111111,1111111}

    while (T--)
    {

        int n;
        cin >> n;

        int a=n%11;
        int b=n-a*111;
        if(b>=0 && b%11==0) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}