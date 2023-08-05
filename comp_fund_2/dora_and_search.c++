// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max1=n;
    int min1=1;

     int i=0;
     int j=n-1;

     while(i<j){
        if(v[i]!=max1 && v[i]!=min1 && v[j]!=max1 && v[j]!=min1){
            cout<<(i+1)<<" "<<(j+1)<<endl;
            return;
        }
       else if(v[i]==max1){
            max1--;
            i++;
        }
        else if(v[i]==min1){
            min1++;
            i++;
        }
        else if(v[j]==max1){
            max1--;
            j--;
        }
        else if(v[j]==min1){
            min1++;
            j--;
        }

     }
   
   cout<<-1<<endl;

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