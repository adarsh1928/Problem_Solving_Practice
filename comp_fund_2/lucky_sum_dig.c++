// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    // if ( n<4 || ( n % 4 != 0 && n % 7 != 0 && n % 7 != 4 && (n-8)%7!=0 && (n-12)%7!=0  && (n-16)%7!=0 && (n-20)%7!=0 && (n-24)%7!=0 ))
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    if (n % 4 == 0)
    {
        int div = n / 28;
        int rem = n % 28;
        string s = "";
        while (div--)
        {
            s += '7';
            s += '7';
            s += '7';
            s += '7';
        }
        while (rem > 0)
        {
            s = '4' + s;
            rem -= 4;
        }

     
        cout << s << endl;
        return;
    }
   else if ( n % 7 == 0)
    {
        int div = n / 7;
        int rem = n % 28;
        string s = "";
        while (div--)
        {
            s += '7';
        }

      
        cout << s << endl;
        return;
    }
    else if( (n-4)>0 && (n-4)%7==0)
    {
       
            int div = (n-4 )/ 7;
            int rem = 1;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem --;
            }

           
            cout << s<< endl;
            return;
        
    }
      else if( n>8 && (n-8)%7==0)
    {
       
            int div =( n-8) / 7;
            int rem = 2;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem --;
            }

           
            cout << s<< endl;
            return;
        
    }
      else if( n>12 && (n-12)%7==0)
    {
       
            int div = (n-12) / 7;
            int rem = 3;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem--;
            }

           
            cout << s<< endl;
            return;
        
    }
     else if( n>16 && (n-16)%7==0)
    {
       
            int div = (n-16) / 7;
            int rem = 4;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem--;
            }

           
            cout << s<< endl;
            return;
        
    }
     else if( n>20 && (n-20)%7==0)
    {
       
            int div = (n-20) / 7;
            int rem = 5;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem--;
            }

           
            cout << s<< endl;
            return;
        
    }
     else if( n>24 && (n-24)%7==0)
    {
       
            int div = (n-24) / 7;
            int rem = 6;
            string s = "";
            while (div--)
            {
                s += '7';
            }
            while (rem > 0)
            {
                s = '4' + s;
                rem--;
            }

           
            cout << s<< endl;
            return;
    }
    else {
        cout<<-1<<endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}