#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n1;
        cin >> n1;

        int max1=0;
        int max2=0;

        int arr1[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
            max1=max(max1,arr1[i]);
        }
        int n2;
        cin >> n2;

        int arr2[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
            max2=max(max2,arr2[i]);
        }

        if(max1>max2){
            cout<<"Alice"<<endl; 
            cout<<"Alice"<<endl; 
        }
        else if(max2>max1){
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }
}