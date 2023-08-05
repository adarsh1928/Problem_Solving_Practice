// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

string decimalToBase9(ll decimal)
{
      string result = "";
 
      if (decimal == 0)
      {
            result = "0";
      }
      else
      {
            while (decimal != 0)
            {
                  int digit = decimal % 9;
                  result = to_string(digit) + result;
                  decimal /= 9;
            }
      }
 
      return result;
}

void fun()
{

    ll n;
    cin >> n;

   

     string s = decimalToBase9(n);
    
      for (auto x : s)
      {
            if(x > '3'){
                  int k = x - '0';
                  cout << k + 1;
            }
            else
                  cout << x;
      }
      cout<<endl;


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