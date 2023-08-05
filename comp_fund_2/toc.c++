// [0-9]+[A-D]+[a-d]*@+


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int n = s.length();
    int f1=0;
    int f2=0;
    int f3=0;
    int cnt=0;
    int cnt1=0;
    int ff=0;
    for(int i=0;i<n;i++){
        
            if(s[i]=='@') cnt++;
       
        else if((s[i]-'a')>=0 && (s[i]-'a'<26 ) && f1!=0){
            ff=1;
            break;
        }
        else if(isdigit(s[i])){
            f3=1;
        }
        // else if(f3==1 &&  (((s[i]-'a')>=0 && (s[i]-'a')<26) ||( (s[i]-'A')>=0 && (s[i]-'A')<26 )) {
        //     ff=1;
        //     break;
        // }
        else if(f3==1 && (((s[i]-'a')>=0 && ( s[i]-'a')<26) || ((s[i]-'A')>=0 && ( s[i]-'A')<26) )){
            ff=1;
            break;
        }
        else if(f1==0 && (s[i]-'A')>=0 && (s[i]-'A'<26 ) ){
            ff=1;
            break;
        }
        else if((s[i]-'A')>=0 && (s[i]-'A'<26 )){
            f2=1;
        }
        else if((s[i]-'a')>=0 && (s[i]-'a'<26 )){
            f1=1;
            cnt1++;
        }
    } 
    if(cnt==0) ff=1;
    int j=n-1;
    while(s[j]=='@' && j>=0){
        cnt--;
        j--;
    }
    if(cnt!=0 || ff==1){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}