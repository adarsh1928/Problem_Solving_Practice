#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin>>s;

        int ans1=9;
        int ans2=9;

        int win1=0;
        int win2=0;

        for(int i=0;i<10;i++){
            if(i%2==0){
                if(s[i]=='1' || s[i]=='?'){
                    win1++;
                }
            }
            else {
                if(s[i]=='1'){
                    win2++;
                }
            }
            int remain1=(10-i)/2;
            int remain2=(9-i)/2;

            if(win1>(remain1+win2)) ans1=min(ans1,i);

            if(win2>(remain2+win1)) ans1=min(ans1,i);
            
        }
        win1=0;
        win2=0;
         for(int i=0;i<10;i++){
            if(i%2==0){
                if(s[i]=='1'){
                    win1++;
                }
            }
            else {
                if(s[i]=='1' || s[i]=='?'){
                    win2++;
                }
            }
             int remain1=(10-i)/2;
            int remain2=(9-i)/2;

            if(win1>(remain1+win2)) ans1=min(ans1,i);

            if(win2>(remain2+win1)) ans1=min(ans1,i);
        }
        cout<<min(ans1,ans2)+1<<endl;
    }
}