#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin >> s;

        string t;
        cin >> t;

        int n1 = s.length();
        int n2 = t.length();

        int i = n1-1;
        int j = n2-1;

        int f = 0;
        int ans = 0;

        int prev = -1;

        while(i>=0 && j>=0){
            if(s[i]==t[j]){
                i--;
                j--;
            }
            else{
                i-=2;
            }
        }
        if(j<0) ans=1; 

        

        if (ans == 1 )
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}