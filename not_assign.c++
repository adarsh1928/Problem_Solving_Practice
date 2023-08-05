#include <bits/stdc++.h>
const int M = 3e5 + 5;
using namespace std;

vector<int>adj[M];
void fun(){
    map<pair<int,int>,int>m;
    int n;
    cin>>n;
vector<int>freq(n+1,0);
for(int i=0;i<=n;i++){
    adj[i].clear();
}
for(int i=0;i<n-1;i++){    

    int a,b;
    cin>>a>>b;

    pair<int,int>p={a,b};
    m[p]=i;
    swap(p.first,p.second);
    m[p]=i;
    
    freq[a]++;
    freq[b]++;

     adj[a].push_back(b);
     adj[b].push_back(a);

}
for(auto i:freq) {
    if(i>2) {
        cout<<"-1"<<endl;
        return;
    }
}
int start;
for(int i=0;i<n;i++){
    if(freq[i]==1){
        start=i;
        break;
    }
}
int w=2;
vector<bool>visited(n,false);
vector<int>ans(n-1);
 queue<int>q;
 visited[start]=true;
 q.push(start);

 while(!q.empty()){
     int fr=q.front();
     q.pop();

     for(auto i:adj[fr]){
         if(!visited[i]){
         visited[i]=true;
         q.push(i);

         pair<int,int>e={fr,i};
         int ind=m[e];
         ans[ind]=w;

         if(w==2) w=5;
         else w=2;
         }
     }
 }

for(auto i:ans){
    cout<<i<<" ";
}
cout<<endl;
    
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        fun();

       
    }
}