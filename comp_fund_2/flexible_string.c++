// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll fun1(string s1, string s2, int n, map<char, int>& m)
{

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i] && m.find(s1[i]) != m.end())
        {
            s1[i] = s2[i];
        }
    }


    ll cnt = 0;
    ll temp2=0;


    for(int i=0;i<n;i++){
        if(s1[i]==s2[i]){
            temp2++;
        }
        else{
            cnt+=((temp2*(temp2+1)))/2;
            temp2=0;
        }

    }
   cnt+=((temp2*(temp2+1)))/2;
    return cnt;
}

void fun()
{

    ll n, k;
    cin >> n >> k;

    string s1, s2;
    cin >> s1 >> s2;

    //    string diff="";
    set<char> set1;
    map<int, char> m1;

    ll max1 = 0;

    int itr = 0;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            if (set1.find(s1[i]) != set1.end())
            {

            }
            else
            {
                m1[itr] = s1[i];
                itr++;
                set1.insert(s1[i]);
            }
        }
    }
    int len = set1.size();
    ll total = (1 << len) - 1;

    //  cout<<" total "<<total<<" ";

    for (int i = total; i >= 0; i--)
    {
        int num = i;
        ll cnt = 0;

        map<char, int> nmap;

        for (int j = 10; j >= 0; j--)
        {
            if (i & (1<<j))
            {
                cnt++;
              if(m1.find(j)!=m1.end()) 
               nmap[m1[j]]++;
            }
        }

        if (cnt <= k)
        {
            ll fromfun = fun1(s1, s2, n, nmap);
            max1 = max(max1, fromfun);
        }
    }

    cout<<max1<<endl;
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