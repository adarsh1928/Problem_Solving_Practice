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

    if (n % 2 == 0)
    {
        cout << "No" << endl;
        return;
    }

    vector<ll> v1;
    vector<ll> v2;
    cout << "Yes" << endl;

    for (int i = 1; i <= n; i++)
    {
        v1.push_back(i);
    }
    for (int i = n + 1; i <= 2 * n; i++)
    {
        v2.push_back(i);
    }
    int div = n / 2;

    int i = 0;
    int j = div;

    while (j < n)
    {
        cout << v1[i] << " " << v2[j] << endl;
        i++;
        j++;
    }
     
     j=0;

     while(i<n){
        cout<<v1[i]<<" "<<v2[j]<<endl;
        i++;
        j++;
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