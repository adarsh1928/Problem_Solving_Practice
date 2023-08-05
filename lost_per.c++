#include <bits/stdc++.h>
using namespace std;

	void leftRotate(int arr[], int k, int n) 
	{ 
	   k=k%n;
	   reverse(arr,arr+k);
	   reverse(arr+k,arr+n);
	   int l=0;
	   int h=n-1;
	   while(h>=l){
	       swap(arr[l],arr[h]);
	       l++;
	       h--;
	   }
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f=0;
        int in=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) f++,in=i;
        }
        int w=0;
        if(f==0 || f>1){
            w=1;
        }
        else{
           leftRotate(arr,in,n);
           for(int i=0;i<n-1;i++){
               if(arr[i+1]-arr[i]>=2){
                   w=1;
               }
           }
        }
        if(w==1) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
    }
}