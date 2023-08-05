#include <bits/stdc++.h>
using namespace std;

  int main()
{
    

        long long  n;
        cin >> n;
      
      long long f[21];
       f[0] = 1;
	for (int i = 1; i < 21; ++i) {
		f[i] = f[i - 1] * i;
	}
	
	long long ans = f[n] / f[n / 2] / f[n / 2];
	ans = ans * f[n / 2 - 1];
	ans = ans * f[n / 2 - 1];
	ans /= 2;
	
	cout << ans << endl;
	
	return 0;
    
}