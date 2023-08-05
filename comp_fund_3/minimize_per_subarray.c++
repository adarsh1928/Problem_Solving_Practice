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
    ll in = -1;
    int in1 = -1;
    int in2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
        {
            in = i + 1;
        }
        else if (v[i] == 1)
        {
            in1 = i + 1;
        }
        else if (v[i] == 2)
        {
            in2 = i + 1;
        }
    }


       
            if (in < min(in1, in2))
            {
                cout << in << " " << min(in1, in2) << endl;
                return;
            }
            else if(in>max(in1,in2)){
                cout<<in<<" "<<max(in1,in2)<<endl;
                return;
            }
            else {
                cout<<in1<<" "<<in2<<endl;
                return;
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