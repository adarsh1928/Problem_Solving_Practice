
#include <bits/stdc++.h>
using namespace std;

int fun(int depth, int i, bool max1, vector<int> v, int h)
{

    if (depth == h)
        return v[i];

    if (max1)
    {
        int val1 = fun(depth + 1, i * 2, false, v, h);
        int val2 = fun(depth + 1, i * 2 + 1, false, v, h);

        return max(val1, val2);
    }
    else
    {
        int val1 = fun(depth + 1, i * 2, true, v, h);
        int val2 = fun(depth + 1, i * 2 + 1, true, v, h);

        return min(val1, val2);
    }
}

int main()
{

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int h = log2(n);
    int anss = fun(0, 0, true, v, h);
    cout << " ANSWER IS : " << anss << endl;
    return 0;
}
