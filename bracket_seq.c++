#include <bits/stdc++.h>
using namespace std;

bool reg(string s){
    stack<int>st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')' && !st.empty()){
            s[st.top()]='#';
            st.pop();
        } 
    }
    int cnt=0;
    for(int i=0;i<s.length();i++){
            if(s[i]=='#') cnt++;
    }
    return cnt*2==s.length();

}
bool checkpeli(string s){
    int l=0;
    int h=s.length();
        while(h>=l){
            if(s[h]!=s[l]) return false;

            h--;
            l++;
        }
        return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        string s;
        cin>>s;
        string s1=s;
          int cnt=0;
         int i=0;
         if(n==1) cout<<"0"<<" "<<"1"<<endl;
       else{
           string temp="";
        for(int i=0;i<n;i++){
            temp+=s[i];
            if(temp=="((" || temp=="))" || temp=="()"){
                temp="";
                cnt++;
            }
            else if(temp.size()>1){
                if(s[i]==')'){
                    cnt++;
                    temp="";
                }
            }

        }
        cout<<cnt<<" "<<temp.length()<<endl;
       }

    }
}