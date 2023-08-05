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
        vector<int>freq(26,0);
        n = 2 * n + 1;
        char c = 0;
        while (n--)
        {
            string s;
            cin >> s;

            for(int i=0;i<s.length();i++){
                freq[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                char ch=i+'a';
                cout<<ch<<endl;
            }
        }
    }
}