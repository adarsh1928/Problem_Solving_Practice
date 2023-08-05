#include <bits/stdc++.h>
using namespace std;

#define MIN -1e8
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int n, m, k, arr[71][71], dp[71][71][71][36];

    
int solve(int i, int j, int mod, int left) {
    if(i == n - 1 && (!left || j == m)) 
        return (mod == 0? 0: MIN);
    
    if(j == m || !left)
        return dp[i][j][mod][left] = solve(i + 1, 0, mod, m/2);
    
    if(dp[i][j][mod][left] != -1)
        return dp[i][j][mod][left];
    
    int ans = MIN, MOD = arr[i][j] % k;
    
    if(MOD < mod) 
        ans = max(ans, arr[i][j] + solve(i, j + 1, mod - MOD, left - 1));
    else if(MOD > mod)
        ans = max(ans, arr[i][j] + solve(i, j + 1, k - (MOD - mod), left - 1));
    else
        ans = max(ans, arr[i][j] + solve(i, j + 1, 0, left - 1));

    ans = max(ans, solve(i, j + 1, mod, left));
    return dp[i][j][mod][left] = ans;
}

int main() {
    cin>>n>>m>>k;
    for(int i=0; i<n; i++) 
        for(int j=0; j<m; j++) cin>>arr[i][j];
    
    memset(dp, -1, sizeof(dp));

    cout<<max(0, solve(0, 0, 0, m/2))<<endl;    
    return 0;

}