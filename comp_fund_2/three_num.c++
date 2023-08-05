#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;


        cin >> a >> b >> c;


        ll difference1 = abs(a - b), difference2 = abs(a - c), d3 = abs(b - c);
        if (difference1 % 2 == 1 || difference2 % 2 == 1 || d3 % 2 == 1)
            cout << -1 << endl;



        else
        {
            ll ans = 0;
            while (1)
            {
                if (a == b && b == c)
                    break;
                if (a >= b && a >= c)
                {
                    ll difference1 = a - b;
                    ll difference2 = a - c;
                    ll diff = min(difference1, difference2);
                    if (diff == 0)
                        diff = max(difference1, difference2);
                    ans += diff / 2;
                    a -= diff / 2;

                    
                    b += diff / 2;
                    c += diff / 2;
                }
                else if (b >= a && b >= c)
                {
                    ll difference1 = b - a;
                    ll difference2 = b - c;
                    ll diff = min(difference1, difference2);
                    if (diff == 0)

                        diff = max(difference1, difference2);
                    ans += diff / 2;
                    a += diff / 2;
                    b -= diff / 2;
                    c += diff / 2;
                }
                else if (c >= a && c >= b)
                {
                    ll difference1 = c - b;
                    ll difference2 = c - a;


                    ll diff = min(difference1, difference2);
                    if (diff == 0)
                        diff = max(difference1, difference2);
                    ans += diff / 2;



                    
                    a += diff / 2;
                    b += diff / 2;
                    c -= diff / 2;
                }
            }
            cout << ans << endl;
        }
    }
}