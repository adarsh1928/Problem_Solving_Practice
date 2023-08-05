#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin>>T;

    while (T--)
    {
        int n;
        cin >> n;

        string S;
        cin>>S;

        int cnt=0;
        stack<char>st;
        int N=2*n;

       
	for(int i = 1; i < N; ++i){
		if(S[i] == '(' && S[i - 1] == '('){ 
			++cnt;
		}
	}
        cout<<cnt+1<<endl;
    }
}