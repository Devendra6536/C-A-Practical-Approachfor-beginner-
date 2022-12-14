#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        vector<int>v(nums2.size(),-1);
        for(int i=nums2.size()-1; i>=0;i--){
            
            while(!st.empty() && st.top() <= nums2[i]) st.pop();
            
            if(!st.empty()) v[i] = st.top();
            st.push(nums2[i]);
        }

        unordered_map<int,int>mp;        
        for(int i = 0; i<v.size(); i++){
            mp[nums2[i]] = v[i];
        }
        for(int i=0; i<nums1.size();i++){
            v[i] = mp[nums1[i]];
        }
        v.erase(v.begin()+nums1.size(),v.end());
        return v;
    }
    void nextSmaller(vector<int>&nums2,int n){
        stack<int>st;
        vector<int>v(n,-1);
        for(int i=nums2.size()-1; i >= 0 ; i--){            
            while(!st.empty() && st.top() >= nums2[i]) st.pop();            
            if(!st.empty()) v[i] = st.top();
            else v[i]= -1;            
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

int main()
{
        /* code here */
        vector<int>vec = {2,1,4,3};
        nextSmaller(vec,4);

    return 0;
}