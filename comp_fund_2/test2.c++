#include <iostream>
#include<unordered_map>
#include<queue> 
#include<string> 
using namespace std;

void solve(string &str, unordered_map<string,bool>& visited)
{
  
    queue<string> q1,q2;
    
    q1.push(str);
    q2.push(str);
    visited[str]=1;
    
    while(!q1.empty())
    {
        string s=q1.front();
        q1.pop();
        
        // for swapping o_
        for(int i=0;i<s.size();i++){
            if(s[i]=='o' && s[i+1]=='_')
            {
                swap(s[i],s[i+1]);
                if(!visited[s])
                {
                q1.push(s);
                q2.push(s);
                visited[s]=1;
                }
               
                swap(s[i],s[i+1]);
            }
        }
        // for swapping oo_
        for(int i=0;i<s.size();i++){
            if(s[i]=='o' && s[i+2]=='_')
            {
                swap(s[i],s[i+2]);
                if(!visited[s])
                {
                q1.push(s);
                q2.push(s);visited[s]=1;
                }
                swap(s[i],s[i+2]);
            }
        }
        // for swapping _o
        for(int i=0;i<s.size();i++){
            if(s[i]=='_' && s[i+1]=='o')
            {
                swap(s[i],s[i+2]);
               if(!visited[s])
                {
                q1.push(s);
                q2.push(s);visited[s]=1;
                }
                swap(s[i],s[i+2]);
            }
        }
        // for swapping _oo
        for(int i=0;i<s.size();i++){
            if(s[i]=='_' && s[i+2]=='o')
            {
                swap(s[i],s[i+2]);
                 if(!visited[s])
                {
                q1.push(s);
                q2.push(s);visited[s]=1;
                }
                swap(s[i],s[i+2]);
            }
        }
        q2.push("0");
        
    }
    
   while(!q2.empty())
   {
    //   if(q2.front()==0) 
    //   {
    //       cout<<endl;
    //       q2.pop();
    //   }
    //   else 
       
           cout<<q2.front()<<" ";
           q2.pop();
       
   }
}
int main()
{
   string str="ooo_xxx";
   unordered_map<string,bool> visited;
   solve(str,visited);

    return 0;
}