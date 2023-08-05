// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     long long T;
//     cin >> T;
//     while (T--)
//     {
//         long long n, x, y;
//         cin >> n >> x >> y;

//         string s1, s2;
//         cin >> s1;
//         cin >> s2;

//         vector<long long> diff;
//         for (long long i = 0; i < n; i++)
//         {
//             if (s1[i] != s2[i])
//             {
//                 diff.push_back(i);
//             }
//         }
//         long long cnt = 0;
//         if (diff.size() % 2 != 0)
//         {
//             cout << "-1" << endl;
//         }
//         else if (diff.size() == 0)
//         {
//             cout << "0" << endl;
//         }
//         else if ( diff.size()==2 &&  diff[1] - diff[0] == 1)
//         {

//             cnt += min(x, 2 * y);
//             cout << cnt << endl;
//         }
//         else{
//              cnt=(diff.size()/2);
//              cnt=(cnt*y);
//              cout<<cnt<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    long long T;
    cin >> T;
    while (T--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
 
        string s1, s2;
        cin >> s1;
        cin >> s2;
 
        vector<long long> diff;
        for (long long i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                diff.push_back(i);
            }
        }
        long long cnt = 0;
        if (diff.size() % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (diff.size() == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (long long j = 0; j < diff.size() - 1; j++)
            {
                if (diff[j + 1] - diff[j] == 1)
                {
                    cnt += min(x, 2 * y);
                }
                else
                {
                    cnt += y;
                }
            }
            cout << cnt << endl;
        }
    }
}

