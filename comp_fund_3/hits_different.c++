// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll built[2023][2023];
ll res[1000005];

void fun()
{

    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    cout<<res[n]<<endl;



}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    ll curr = 0;


    int cnt=1;
	ll i=1,j=1,num=1;
	while(num<=1000000){
		
		built[i][j]=built[i-1][j]+built[i][j-1]-built[i-1][j-1]+num*num;
		res[num]=built[i][j];
		if(j==cnt && i==1){
			
			cnt++;
			i=cnt;
			j=1;
			
		}
		else{
			i--;
			j++;
		}
		num++;
		
		
	}

  
    while (T--)
    {
        fun();
    }
}