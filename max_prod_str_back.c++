#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;
        vector<long long> v(n+1, 0), count1(n+1, 0), count2(n+1, 0);
        for(int i = 1; i <= n; i++)    {
            cin >> v[i];
            if(v[i] == 1 || v[i] == -1)    {
                count1[i]++;
            }
            else if(v[i] == 2 || v[i] == -2)    {
                count2[i]++;
            }
            count2[i] += count2[i-1];
            count1[i] += count1[i-1];
        }
        long long total_neg = 0, last_zero = 0, last_neg = 0, mx_2 = 0, curr_2 = 0;
        pair<long long, long long> ans = {n, 0};
        for(int i = 1; i <= n; i++)    {
            if(v[i] == 0)    {
                last_zero = i;
                total_neg = 0, last_neg = 0, curr_2 = 0;
                continue;
            }
            else if(v[i] == -1 || v[i] == -2)    {
                total_neg++;
                if(v[i] == -2)    {
                    curr_2++;
                }
                if(total_neg%2 == 0)    {
                    if(curr_2 >= mx_2)    {
                        mx_2 = curr_2;
                        ans = {last_zero, n-i};
                    }
                }
                else    {
                    if(last_neg == 0)    {
                        last_neg = i;
                        continue;
                    }
                    long long temp = count2[i] - count2[last_neg];
                    if(temp >= mx_2)    {
                        mx_2 = temp;
                        ans = {last_neg, n-i};
                    }
                }
            }
            else    {
                if(v[i] == 2)    {
                    curr_2++;
                }
                if(total_neg%2 == 0)    {
                    if(mx_2 <= curr_2)    {
                        mx_2 = curr_2;
                        ans = {last_zero, n-i};
                    }
                }
                else    {
                    if(last_neg == 0)    {    
                        last_neg = i;
                        continue;
                    }
                    long long temp = count2[i] - count2[last_neg];
                    if(temp >= mx_2)    {
                        mx_2 = temp;
                        ans = {last_neg, n-i};
                    }
                }
            }
        }
        cout << ans.first << " " << ans.second << "\n";
 


    }
}