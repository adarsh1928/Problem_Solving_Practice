#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
         map<int,int>m1;
         int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m1[arr[i]]++;
            if(m1[arr[i]]<=2){
                cnt++;
            }
        }
        cout<<(cnt+1)/2<<endl;
    }
}