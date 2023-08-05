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

        char ch;
        cin >> ch;

        string s;
        cin >> s;

        s += s;
        n = s.length();

        int max1 = 0;
        
        int val=0;

        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g') val=i;

            if(s[i]==ch) {
                max1=max(max1,val-i);
            }
        }
        cout << max1 << endl;
    }
}