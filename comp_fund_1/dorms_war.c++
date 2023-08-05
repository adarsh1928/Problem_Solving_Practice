#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v;

        string s1;
        cin>>s1;

        string s2="";
        int n1;
        v.push_back(1);
        cin>>n1;
        map<char,int>m;
        int cnt=0;

        vector<int>v1(1001,0);

        while(n1--){
            char ch;
            cin>>ch;
            v1[ch-'a']=1;
            
        }
        int min1=0;
        
        for(int i=0;i<n;i++){
           if(v1[s1[i]-'a']){
                min1=max(min1,cnt);
                cnt=0;
           }
           cnt++;
        }
        cout<<min1<<endl;
    }
}