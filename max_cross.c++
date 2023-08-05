#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

int main()
{
    int T;
    cin >> T;

    

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
         
        }
        long long sum1=0;
        pbds st;
      for(int i=0;i<n;i++){
            st.insert(arr[i]);
            int cnt1=st.order_of_key(arr[i]);
            sum1+=(cnt1+m[arr[i]]);
            m[arr[i]]++;
      }
      cout<<sum1<<endl;
    }
}