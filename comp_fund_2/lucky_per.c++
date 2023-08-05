// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

struct unionFind{
    vector<int> roots;
    vector<int> heights;
    
    unionFind(int sz):roots(sz),heights(sz){
        for(int i=0;i<sz;i++){
            roots[i]=i;
            heights[i]=1;
        }
            
    }
    
    int find(int x){
        return (x==roots[x])?x:roots[x]=find(roots[x]);
    }
    
    void connect(int a,int b){
        int root1=find(a),root2=find(b);
        if(root1!=root2){
            if(heights[root1]>heights[root2])
                roots[root2]=root1;
            else if(heights[root1]<heights[root2]) 
                roots[root1]=root2;
            else{
                roots[root2]=root1;
                heights[root1]++;
            }
        }
    }
    
    bool isConnected(int a,int b){
        return find(a)==find(b);
    }
    
};

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unionFind dsu(n);

    for(int i=0;i<n;i++){
        v[i]--;
        dsu.connect(i,v[i]);
    }
    ll cnt=0;

    set<ll>st;

    for(int i=0;i<n;i++){
        st.insert(dsu.find(i));
    }

    cnt=st.size();

    for(int i=1;i<n;i++){
        if(dsu.isConnected(v[i],v[i-1])){
            cout<<(n-(cnt+1))<<endl;
            return;
        }
    }
    cout<<n-(cnt-1)<<endl;
    return;



     
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        fun();
    }
}