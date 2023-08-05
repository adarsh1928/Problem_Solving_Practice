// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vector<ll> fibo(46, 0);

void pre()
{
    for (int i = 0; i < 45; i++)
    {
        if (i == 0 || i == 1)
        {
            fibo[i] = 1;
        }
        else
            fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

bool fun1(int n, int x, int y)
{
    if (n == 1)
    {

        return true;
    }
    if (fibo[n - 1] <= y && y < fibo[n])
    {

        return false;
    }
    if (fibo[n] <= y)
    {

        y -= fibo[n];
    }
    return fun1(n - 1, y, x);
}

void fun()
{

    ll n, x, y;
    cin >> n >> x >> y;

    pre();

    // vl v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    x--;
    y--;

     bool f=fun1(n,x,y);
     if(f){
        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;

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