#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        int cnt=1;
        vector<vector<string>>vec;
        int n = 10;
        int r=0, c=9;
        for(int i=0;i<n;i++){
            vector<string>v;
            for(int j=0;j<n;j++){
                if(i==j) v.push_back("*");
                else if(i==r && c==j) v.push_back("*");
                else {
                    if(i==0) v.push_back(to_string(cnt)+" ");
                    else v.push_back(to_string(cnt));
                } 
                cnt++;
            }
            r++;
            c--;
            vec.push_back(v);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}