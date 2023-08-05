    #include <bits/stdc++.h>
    using namespace std;



    bool fun1(char ch){
        if(ch>='a' && ch<='d') return true;
        else return false;
    }
    bool fun2(char ch){
        if(ch>='A' && ch<='D') return true;
        else return false;
    }

    int main()
    {

            string s;
            cin>>s;

            int n=s.length();   
            int ravi1=0; 
            int ravi2=0;  
            int ravi3=0;   
            int ravi4=0;  
            int raviii=0;   
        
        
            for (int i = 0; i < n; i++)
            {
                if(isdigit(s[i]) && (ravi2!=0 || ravi3!=0 || ravi4!=0)){
                    raviii=1;
                    break;
                }
                if(isdigit(s[i]) && (ravi2==0 && ravi3==0 && ravi4==0)){
                    ravi1=1;
                }
                if(fun2(s[i])){
                    if(ravi1==0 || (ravi3!=0 || ravi4!=0)){
                        raviii=1;
                        break;
                    }
                    else{
                        ravi2=1;
                    }
                }
                if(fun1(s[i])){
                    if(ravi1==0 || ravi2==0 || ravi4!=0){
                        raviii=1;
                        break;
                    }
                    else{
                        ravi3=1;
                    }
                }
                if(s[i]=='@'){
                    if(ravi1==0 || ravi2==0 ){
                        raviii=1;
                        break;
                    }
                    else{
                        ravi4=1;
                    }
                }
            }
            if(raviii==1 || ravi1==0 || ravi2==0 || ravi4==0){
                cout<<"NOT ACCEPTABLE "<<endl;
            }
            else cout<<"ACCEPTABLE "<<endl;
        
    }