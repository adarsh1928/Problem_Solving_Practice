// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vector<int> funn(vector<ll> &arr, int n, int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < k - 1; i++)
    {
        pq.push({arr[i], i});
    }

    vector<int> ans;

    for (int i = k - 1; i < n; i++)
    {
        pq.push({arr[i], i});

        int in = pq.top().second;
        int val = pq.top().first;

        while (pq.size() && abs(i - pq.top().second + 1) > k)
        {
            pq.pop();
        }

        if (pq.size())
            ans.push_back(pq.top().first);
    }

    return ans;
}

void fun()
{

    ll n;
    cin >> n;

    ll k;
    cin >> k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll val = 0;

    for (int i = 0; i < k - 1; i++)
    {
        val += v[i];
    }

    ll max1 = 1e18;
    ll minin = -1;

    for (int i = k - 1; i < n; i++)
    {
        val += v[i];

        if (max1 > val)
        {
            max1 = val;
            minin = i;
        }
        val -= v[i - k + 1];
    }

    cout << minin - k + 1 << endl;
    cout << minin << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}