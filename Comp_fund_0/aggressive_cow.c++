#include <bits/stdc++.h>
using namespace std;

bool possible(int arr[], int n, int mid, int cow)
{
    int cnt = 1;
    int prev = arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - prev) >= mid)
        {
            cnt++;
            prev = arr[i];
        }
    }
    if (cnt >= cow)
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n, cow;
        cin >> n >> cow;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int l = arr[0];
        int h = arr[n - 1] - arr[0];
        int res = 1;
        while (l <= h)
        {
            int mid = (l + ((h - l) / 2));
            if (possible(arr, n, mid, cow))
            {
                res = mid;
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        cout << res << endl;
    }
}