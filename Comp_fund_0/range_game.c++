

   #include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
int main()
{
    int t;
    cin>>t;
 
    while (t--){
        int n;
        cin>>n;
    
        vvi ranges(n,vi(2));
        vvb exists(n + 1,vb(n + 1,false));
        
        for (int i = 0;i<n;i++){
            cin>>ranges[i][0]>>ranges[i][1];
            int l = ranges[i][0];
            int r = ranges[i][1];
            exists[l][r] = true;
        }
        
        for (int i = 0;i<n;i++){
            int l = ranges[i][0];
            int r = ranges[i][1];
            for (int d = l;d <= r;d++){
                int l1 = l;
                int r1 = d - 1;
                int l2 = d + 1;
                int r2 = r;
                if ((l1 > r1 or exists[l1][r1]) and (l2 > r2 or exists[l2][r2])){
                    cout<<l<<" "<<r<<" "<<d<<endl;
                    break;
                }
            }
        }        
        cout<<endl;
    }
    return 0;
}
