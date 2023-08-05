#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n, m;
        cin >> n >> m;

        char arr[n][m];
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            int last = n - 1;
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i][j] == 'o')
                {
                    last = i - 1;
                }
                else if (arr[i][j] == '*')
                {
                    swap(arr[i][j], arr[last][j]);
                    last--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << "";
            }
            cout << endl;
        }
    }
}




