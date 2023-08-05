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

        vector<string> v;

        vector<vector<int>>freq(n,vector<int>(5));

        for (int i = 0; i < n; i++)
        {

            string x;
            cin >> x;

            v.push_back(x);
        }
        
        for(int i=0;i<v.size();i++){
            vector<int>temp(5,0);
            for(int j=0;j<v[i].length();j++){
                 temp[v[i][j]-'a']++;
            }
            freq[i]=temp;
           
        }

        int ans=0;
        for(int ee=0;ee<5;ee++){
           

            vector<int>temp;
            for(int i=0;i<n;i++){
                int val1=0;
                int val2=0;
                for(int j=0;j<5;j++){
                   if(j==ee) val1=freq[i][j];
                   else val2+=freq[i][j];
                }
                temp.push_back(val1-val2);
            }
            sort(temp.begin(),temp.end(),greater<int>());
            int count=0;
            int t1=0;
            for(int k=0;k<temp.size();k++){
                count+=temp[k];

                if(count<=0) {
                    break;
                }
                     t1++;
                
            }
            ans=max(ans,t1);
        }
        cout<<ans<<endl;
    }
}
