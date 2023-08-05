// #include <bits/stdc++.h>
// using namespace std;

// void fun(int a, int b, char side)
// {

//     if (a == 0 && b == 0)
//     {
//         cout << " THE PROBLEM IS SOLVED "<<endl;
//          cout<<" value A = "<<a<<" "<<" value B = "<<b<<" ";
//         // cout<<s<<endl;
//         return;
//     }
//     if(a==b && side=='L'){
//         return;
//     }
//     if(a<b) return;

//     if(a>b){
//         if(a!=3) return;
//     }
//     // if(a==0 && b==1 && side=='R'){
//     //     cout<<" complete "<<endl;
//     //     fun(a,b-1,'L');
//     // }

//     if((a<0 || b<0)) return;

//     // if ((a == 0 && b != 0) || (a != 0 && b == 0))
//     // {
//     //     cout<<" B is 0 but 1 is not "<<endl;
//     //     return;
//     // }
//     if(side=='L'){
//         //  fun(a-1,b-1,'L',"AB_AABB");
//         //  fun(a-2,b,'L',"");
//         //  fun(a,b-2,'L',"");
//          cout<<" value A = "<<a<<" "<<" value B = "<<b<<" ";
//          if(a==3 && b==0){
//             fun(a,b+1,'R');
//         }
//         if(a==3 && b==1){
//             fun(a,b+1,'R');
//         }
//         if(a==3 && b==2){
//              fun(a,b+1,'R');
//         }

//         if(a==2 && b==1){
//           return;
//         }

//         if(a==1 && b==1){
//            return;
//         }
//         if(a==0 && b==3){
//              return;
//         }
//     }
//     if(side=='R'){
//         //   if(a!=3) fun(a+1,b,'R',"");
//         //   if(b!=3) fun(a,b+1,'R',"");
//         cout<<" value A = "<<a<<" "<<" value B = "<<b<<" ";
//         if(a==3 && b==0){
//             return;

//         }
//         if(a==3 && b==1){
//             fun(a-2,b,'L');
//         }
//         if(a==3 && b==2){
//               fun(a-1,b-1,'L');
//         }
//         if(a==3 && b==3){
//             fun(a-1,b-1,'L');
//             fun(a,b-2,'L');
//         }
//         if(a==2 && b==1){
//              return;
//         }
//         if(a==2 && b==2){
//            fun(a-1,b-1,'L');
//            fun(a-2,b,'L');
//         }
//         if(a==1 && b==1){
//              fun(a-1,b-1,'L');
//         }
//         if(a==0 && b==3){
//             fun(a,b-1,'L');
//             fun(a,b-2,'L');
//         }
//     }

//     // if (side == 's')
//     // {
//     //     cout<<"side is stand "<<endl;
//     //     fun(a - 1, b - 1, 'L');
//     //     // fun(a, b - 2, 'L');
//     // }
//     // if (side == 'L' && a == b)
//     // {
//     //     cout<<" side is left "<<endl;
//     //     fun(a + 1, b, 'R');
//     // }
//     // if (side == 'R' && a > b)
//     // {
//     //     cout<<"side is right "<<endl;
//     //     if (b == 1)
//     //     {
//     //         fun(a - 1, b - 1, 'L');
//     //         if(a>=2){
//     //             fun(a-2,b,'L');
//     //         }
//     //     }
//     //     if (b == 2)
//     //     {
//     //         fun(a, b - 2, 'L');
//     //     }
//     // }
//     // if (side == 'L' && a == 3)
//     // {
//     //     cout<<"side is left "<<endl;
//     //     fun(a, b + 1, 'R');
//     // }
//     // if (side == 'R' && a == 0)
//     // {
//     //     cout<<" side is right "<<endl;
//     //     fun(a, b - 2, 'L');
//     // }
// }

// int main()
// {

//     cout << " HERE WE WILL SOLVE THE PROBLEM "<<endl;

//     fun(3, 3, 'R');
// }
#include <bits/stdc++.h>
using namespace std;

int flag=0;

int cnt=0;

void fun(int aright, int bright, int m2, int bleft, int b,int f)
{
    // cout<<" aright "<<aright<<" "<<" m2  "<<m2<<" "<<" bright "<<bright<<" "<<" bleft "<<bleft<<endl;
    cnt++;

    if ((aright == 0 && bright == 0) || (m2==3 && bleft==3))
    {
        cout<<" AAABBB_"<<endl;
        cout << " We solved the problem successFully ! " << endl;
        flag=1;
        return;
    }
    if (aright > 3 || bright > 3 || m2 > 3 || bleft > 3)
        return ;
     if (aright < 0 || bright < 0 || m2 < 0 || bleft < 0)
        return ;
    if (aright < bright && aright > 0)
        return ;
    if (m2 < bleft && m2 > 0)
        return ;

        string s=" ";
        int t1=aright;
        int t2=m2;
        int u1=bright;
        int u2=bleft;

        while(t2--){
            s+='A';
        }
        while(u2--){
            s+='B';
        }
        s+='_';
        while(t1--){
            s+='A';
        }
        while(u1--){
            s+='B';
        }

       if(flag==0) 
       {
        cout<<s<<"  ";
         if(b==1) cout<<" Side Right "<<endl;
         if(b==0) cout<<" Side Left "<<endl;
       }

    if (b == 1 && flag==0)
    {
        
            fun(aright - 1, bright - 1, m2 + 1, bleft + 1, 0,f);
            fun(aright , bright -2 , m2 , bleft+ 2 , 0,f);
            fun(aright - 2, bright , m2 + 2, bleft , 0,f);
       
    }
    else if(flag==0 && b==0)
    {
       
            fun(aright , bright +1, m2 , bleft - 1, 1,f);
            fun(aright + 1, bright , m2 - 1, bleft , 1,f);
         if(aright==bright && aright==1 && f==0)    fun(aright+1 , bright +1, m2 - 1, bleft - 1, 1,1);
       
    }
}

int main()
{
    // cout << cnt << endl;
    cout<<" _AAABBB "<<endl;
    fun(3, 3, 0, 0, 1,0);
    
    return 0;
}
