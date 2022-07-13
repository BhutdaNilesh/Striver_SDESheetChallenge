#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int>st;
    vector<int>ans(n,-1);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(!st.empty()) ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}