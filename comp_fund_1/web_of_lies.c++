#include <bits/stdc++.h>
typedef long long int ll;
 
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
 
    int n,m;
    cin>>n>>m;
 
    int arr[n]={0};
 
    int cnt=n;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
            swap(x,y);
 
        x--,y--;
 
        if(arr[x]==0)
            cnt--;
 
        arr[x]++;        
    }
 
    int q;
    cin>>q;
 
    while(q--)
    {
        int qt;
        cin>>qt;
 
        if(qt==1)
        {
            int x, y;
            cin >> x >> y;
            if (x > y)
                swap(x, y);
 
            --x,--y;
            if (arr[x] == 0)
                cnt--;
            arr[x]++;
        }
 
        if (qt == 2)
        {
            int x, y;
            cin >> x >> y;
            if (x > y)
                swap(x, y);
 
            --x, --y;
 
            arr[x]--;
            if (arr[x] == 0)
                cnt++;
        }
 
        if (qt == 3)
        {
            cout << cnt << '\n';
        }
    }

}
