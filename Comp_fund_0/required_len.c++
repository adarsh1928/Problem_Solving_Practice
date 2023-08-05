#include <bits/stdc++.h>
using namespace std;
long long n,x;
vector<long long> findDigits(long long x)   {
    vector<long long> digits;
    while(x)    {
        digits.push_back(x%10);
        x /= 10;
    }
    return digits;
}
int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> x;
    if(x == 1)  {
        cout << "-1\n";
        return 0;
    }
    queue<pair<long long, long long> > q;
    q.push({x, 0});
    int count = 0;
    set<long long> s;
    while(q.size() > 0)    {
        int sz = q.size();
        for(int j = 0; j < sz; j++) {
            pair<long long , long long> abc = q.front();
            q.pop();
            
            vector<long long> digits = findDigits(abc.first);
            
            if(digits.size() >= n)  {
                cout << abc.second << "\n";
                return 0;
            }
            
            for(long long i = 0 ; i < digits.size(); i++) {
                if(digits[i] != 0 && digits[i] != 1)    {
                    long long next = abc.first * digits[i];
                    s.insert(next);
                }
            }
        }
        count++;
        for(auto it = s.rbegin(); it != s.rend(); it++)    {
            q.push({*it, count});
            if(q.size() == 10000)    {
                break;
            }
        }
    }
    cout << "-1\n";
    return 0;
}
