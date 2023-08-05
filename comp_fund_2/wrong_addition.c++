#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n1, n2;
        cin >> n1 >> n2;

        vector<long long> dig;
        long long f=0;

        while (n2)
        {
            long long dig1 = n1 % 10;
            long long dig2 = n2 % 10;

            if (dig2 >= dig1)
                dig.push_back(dig2 - dig1);
            else
            {
                n2 /= 10;
                dig2 += (10 * (n2 % 10));

                if (dig2 <= 19 && dig2 >= 10 && dig2>dig1)
                { 
                        dig.push_back(dig2 - dig1);
                    
                }
                else
                {
                    f=1;
                }
            }
            n1/=10;
            n2/=10;
        }
        if(n1>0 || f==1) {
            cout<<-1<<endl;
        }
        else{

            while(dig.back()==0) dig.pop_back();
            for(long long i=dig.size()-1;i>=0;i--){
                cout<<dig[i];
            }
            cout<<endl;
        }
    }
}