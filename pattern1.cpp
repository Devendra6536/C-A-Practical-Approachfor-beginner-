#include<iostream>
using namespace std;
int main(){
    // int i,j;
    // for(i=0;i<5;i++){
    //     for(j=0;j<4;j++){
    //         if(i==j){
    //             cout<<" ";
    //         }
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

// cout<<endl;
// int n = 8;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(j==n-1-i){
//                 cout<<" Z ";
//             }
//             else 
//             {
//              if((i==0 && j<n-1) || (i==n-1 && j>0))
//             {
//                 cout<<" Z";
//             }
//             else{
//                 cout<<"  ";
//             }
//             }
//         }
//         cout<<endl;
//     }




int n=8;
int index = 1;
int right=n*n+1;

    for(int i=n;i>0;i--){

        for(int l=n; l>i; l--){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<index++;
            cout<<" ";
        }
        for(int k = 1;k<=i;k++)
        {
            cout<<right++;
            if(k<i) 
                cout<<" ";
        }
        right = right-(i-1)*2-1;
        cout<<endl;
    }
    
    return 0;
}