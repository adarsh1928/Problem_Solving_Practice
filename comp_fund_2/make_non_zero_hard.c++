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
        int sum1=0;
        int f;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            sum1+=x;
        }
        v.push_back(0);

        if(sum1%2!=0){
            cout<<-1<<endl;
        }
        else{

            if(sum1<0) {
                f=-1;
                sum1=-sum1;
            }
            else f=1;
            sum1=sum1/2;

            cout<<(n-sum1)<<endl;
            for(int i=0;i<n;i++){
                if(sum1 && v[i+1]==f){
                    cout<<(i+1)<<" "<<(i+2)<<endl;
                    i++;
                    sum1--;
                }
                else cout<<(i+1)<<" "<<(i+1)<<endl;
            }
        }

    }
}