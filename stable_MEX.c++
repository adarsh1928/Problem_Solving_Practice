#include <bits/stdc++.h>
using namespace std;

int fun(int arr,int *n,int arr2){
    
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i]=arr[i];
        }
        sort(arr2,arr2+n);
        fun(*arr,&n,*arr2);
    }
}