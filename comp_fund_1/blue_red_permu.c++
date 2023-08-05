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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        string s;
        cin>>s;

        vector<int>blue;
        vector<int>red;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                red.push_back(v[i]);
            }
            else blue.push_back(v[i]);
        }
        sort(blue.begin(),blue.end());
        sort(red.begin(),red.end());

        int curr=1;
        int i=0;
        int j=0;
        int f=0;
        int f2=0;
        while(j<blue.size()){
            if(blue[j]<curr){
                f=1;
                break;
            }
            else curr++;

            j++;
        }
        while(i<red.size()){
            if(red[i]>curr){
                f=1;
                break;
            }
            else{
                curr++;
            }
            i++;
        }
        if(f==1){
             cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        
    }
}