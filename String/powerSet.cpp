#include<bits/stdc++.h>
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>>ans;
    int n = v.size();
    for(int num=0;num<(1<<n);num++){
        vector<int>res;
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                res.push_back(v[i]);
            }
        }
        ans.push_back(res);
    }
    return ans;
}