#include<bits/stdc++.h>
using namespace std;

int main(){
    // decimal to bianry convertor

    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int ans=0;
    int i=0;

    while(n!=0){
        int bit=n&1;
       
        ans=(bit*i)+ans;
        n=n>>1;
        i=i*10;

    }
    cout<< "Answer is "<<ans<<endl;
    


}