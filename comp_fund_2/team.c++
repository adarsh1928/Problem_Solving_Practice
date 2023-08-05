#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int n1 = n;
    int m1 = m;

    string s = "";
    if (n1 > m1)
    {

        while (n1 >= m1 && (n1 > 0 || m1 > 0))
        {
            if (n1 > 0)
                s += '0', n1--;
            if (m1 > 0)
                s += '1', m1--;
        }
    }
    else
    {
        while (m1 >= n1 && (n1 > 0 || m1 > 0))
        {
            if ((m1 - n1) >= 1)
            {
                if (m1 >= 2)
                    s += "11", m1 -= 2;
                else if (m1 < 2)
                    s += '1', m1--;

                if (n1 > 0)
                    s += '0', n1--;
            }
            else
            {
                if (m1 > 0)
                    s += '1', m1--;
                if (n1 > 0)
                    s += '0', n1--;
            }
        }
    }
    int f = 0;
    int sz = s.length();
    for (int i = 0; i < sz - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '0')
        {
            f = 1;
            break;
        }
    }
    for (int i = 0; i < sz - 2; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == '1')
        {
            f = 1;
            break;
        }
    }
    if (f == 1 || ((n + m) != sz))
    {
        cout << -1 << endl;
    }
    else
        cout << s << endl;
}