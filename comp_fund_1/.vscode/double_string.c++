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

        map<string,int>m;
        vector<string>v;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
            m[x]++;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            string temp=v[i];
            int f=0;
            for(int j=1;j<temp.length();j++){
                string te=temp.substr(0,j);
                string te1=temp.substr(j);

                if(m.find(te)!=m.end() && m.find(te1)!=m.end() && (te!=temp && te1!=temp)){
          
                    f=1;
                    break;
                }
            }
            if(f==1){
                ans+='1';
            }
            else ans+='0';
        }
           cout<<ans<<endl;
    }
}