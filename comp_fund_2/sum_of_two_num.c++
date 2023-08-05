// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funnx(ll n)
{

    ll sum = 0;
    while (n > 0)
    {
        ll dig = n % 10;
        sum += (dig);
        n = n / 10;
    }
    return sum;
}
ll summm(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

vector<int> funn(int n){
    
    vector<int>dig(10);

    int i=0;

    while(n>0){
        int last=n%10;
        dig[i]=last;
        i++;
        n=n/10;
    }

    return dig;
}
int funcnt(int n){
    
    vector<int>dig(10);

    int i=0;

    while(n>0){
        int last=n%10;
        dig[i]=last;
        i++;
        n=n/10;
    }

    return i;
}

void fun()
{

    ll n;
    cin >> n;

    if ((n % 2) == 0)
    {
        cout << (n / 2) << " " << (n / 2) << endl;
        return;
    }
    else
    {

        vector<int>digit=funn(n);
        int cnt=funcnt(n);

        vector<int>v1(10);
        vector<int>v2(10);

        int var=0;

        for(int i=0;i<cnt;i++){
            if(digit[i]%2!=0){
                v1[i]=(digit[i]/2);

                if(var==1){
                    v1[i]=v1[i]+1;
                }

                v2[i]=(digit[i]/2)+1;
                if(var==1){
                    v2[i]=v2[i]-1;
                }

                if(var==0){
                    var=1;
                }
                else var=0;
            }
            else if(digit[i]%2==0){
                v1[i]=digit[i]/2;
                v2[i]=digit[i]/2;
            }
        }

        ll ans1=0;
        ll ans2=0;


           ll tempp=1;

           for(int i=0;i<cnt;i++){
                 ll val1=v2[i]*tempp;
                 ll val2=v1[i]*tempp;

                 ans1+=val1;
                 ans2+=val2;


                 tempp=tempp*10;
           }
           cout<<ans1<<" "<<ans2<<endl;















        // string temp = to_string(n);
        // // ll sum1=summm(n);
        
        // int len = temp.length();
        // ll n1 = n;
        // ll n2 = 0;

        

        // if ((sum1 / 9 )== len)
        // {

        //     if (len % 2 == 0)
        //     {
        //         string t1 = "";
        //         for (int i = 0; i < (len / 2); i++)
        //         {
        //             t1 += '9';
        //         }
        //         for (int i = (len / 2); i < len; i++)
        //         {
        //             t1 += '0';
        //         }
        //         string t2 = " ";

        //         for (int i = 0; i < (len / 2); i++)
        //         {
        //             t2 += '0';
        //         }
        //         for (int i = (len / 2); i < len; i++)
        //         {
        //             t2 += '9';
        //         }

        //         int num1 = stoi(t1);
        //         int num2 = stoi(t2);

        //         cout << num1 << " " << num2 << endl;
        //         return;
        //     }
        //     else
        //     {
        //         int num1 = n / 2;
        //         int num2 = (n + 1) / 2;

        //         string m1 = to_string(num1);
        //         string m2 = to_string(num2);

        //         int len = m1.length();

        //         string t1 = "";
        //         string t2 = "";
        //         for (int i = 0; i < ((len + 1) / 2); i++)
        //         {
        //             t1 += m1[i];
        //         }
        //         for (int i = ((len + 1) / 2); i < len; i++)
        //         {
        //             t1 += '0';
        //         }

        //         for (int i = 0; i < (len / 2); i++)
        //         {
        //             t2 += '9';
        //         }

        //         int numm = stoi(t2);

        //         num2 += numm;
        //         int ans1 = stoi(t1);

        //         cout << num2 << " " << ans1 << endl;
        //         return;
        //     }
        // }
        // else
        // {
        //     cout << (n / 2) << " " << ((n + 1) / 2) << endl;
        //     return;
        // }
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        fun();
    }
}