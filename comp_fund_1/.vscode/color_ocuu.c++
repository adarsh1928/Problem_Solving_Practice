

#include <bits/stdc++.h>
using namespace std;


bool comp(pair<string,int> &p1,pair<string,int> &p2)
{
    if(p1.first.size()==p2.first.size()) return p1<p2;
    return p1.first.size()>p2.first.size();
}


int main()
{
    int T;
    cin >> T;

    while (T--)
    {

       string s;
       cin>>s;

       int n;
       cin>>n;

       vector<pair<string,int>>v;
    //    map<s,int>m;
       int n1=n;
       int cnt1=1;
       while(n1--){
           string temp;
           cin>>temp;

           v.push_back({temp,cnt1});
           cnt1++;
          
        //   m[temp]=(n-n1+1);
       }
       int cnt=0;
          sort(v.begin(),v.end(),comp);
          int previ=-1;
          int ff=0;

          vector<pair<int,int>>ans;

        for(int i=0;i<s.size();){
            int f1=0;
            if(i<0 || (i!=0 && previ>=i)){
                ff=1;
                break;
            }
            for(int j=0;j<v.size();j++){
                int size1=v[j].first.size();
               
               if((previ==0 || i>previ) && i+size1<n && s.substr(i,i+size1)==v[j].first) {
                previ=i;
                ans.push_back({v[j].second,i+1});
                cnt++;
                f1=1;
                i=i+size1;
                if(i>=s.size()){
                    break;
                }
                continue;
               }
            }
            if(f1==0) {
                i--;
            }
        }
        if(ff==1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<cnt<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }

    }
}