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

        int arr[n];
        vector<int>freq(10,0);
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int mod=arr[i]%10;
            freq[mod]++;
        }
        for(int i=0;i<10;i++){
            if(freq[i]>=3){
                v.push_back(i);
                v.push_back(i);
                v.push_back(i);
            }
            else{
                int fr1=freq[i];
                while(fr1>0){
                    v.push_back(i);
                    fr1--;
                }
            }
        }
        int f=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                for(int k=j+1;k<v.size();k++){
                    if(i<v.size() && j<v.size() && k<v.size()){
                     int sum1=v[i]+v[j]+v[k];
                     sum1=sum1%10;
                     if(sum1==3){
                        f=1;
                        break;
                     }
                    }
                }
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}