#include <bits/stdc++.h>
using namespace std;

long long fun1(long long n)
{

    if (n < 0)
        return 0;
    if (n == 1)
        return 0;

    if (n % 2 == 0)
    {
        return fun1(n / 2) + 1;
    }
    else
        return fun1(n / 2);
}
long long fun2(long long n)
{

    if (n < 0)
        return 0;
    if (n == 1)
        return 1;

    if (n % 2 == 0)
    {
        return 2 * fun2(n / 2) + 1;
    }
    else
        return 2 * fun2(n / 2);
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long L, R;
        cin >> L >> R;

        if (L == R)
        {
            long long val = fun1(L) + fun2(L);

            cout << val << endl;
        }
        else
        {
            long long val1 = 0;
            long long f=0;

            for(long long i=0;i<=31;i++){
                long long val=(1<<i);

               if(val>=L && val<=R ) f=1,val1=max(val1,fun1(val)+fun2(val));
            }
            if(f==0){
                long long val=log2(L);
                if((1<<val)!=L) val=val-1;
                long long val2=log2(R);
                if((1<<val2)!=R) val2=val2-1;

                val1=max(val1,fun1(val)+fun2(val));
                val1=max(val1,fun1(val2)+fun2(val2));
            }

            cout << val1 << endl;
        }
    }
}