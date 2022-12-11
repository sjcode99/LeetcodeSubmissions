//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int k, l;
        vector<int> ans = arr;
        
        if(N == 1) return ans;
        
        for(k=N-2; k>=0; k--){
            if(ans[k] < ans[k+1]) break;
        }
        
        if(k<0){
            reverse(ans.begin(), ans.end());
        }else{
            for(l=N-1; l>k; l--){
                if(ans[l] > ans[k]) break;
            }
            swap(ans[k], ans[l]);
            reverse(ans.begin() + k + 1, ans.end());
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends