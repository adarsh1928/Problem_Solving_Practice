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

        vector<int> arr1;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            arr1.push_back(x);
        }
        sort(arr1.begin(),arr1.end());
        int mini=INT_MAX;
        for(int i=0;i<n-2;i++){
            int arr1al=abs(arr1[i]-arr1[i+1]);
            arr1al+=abs(arr1[i+1]-arr1[i+2]);
            mini=min(mini,arr1al);
        }
        cout<<mini<<endl;
    }
}