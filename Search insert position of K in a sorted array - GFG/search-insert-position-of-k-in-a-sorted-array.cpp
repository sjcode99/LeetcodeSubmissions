//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
    int lowerBound(vector<int>& nums, int n, int x){
    	int low = 0, high = n-1;
    	int ans = n;
    
    	while(low <= high){
    		int mid = low + (high - low)/2;
    
    		if(nums[mid] >= x){
    			ans = mid;
    			high = mid - 1;
    		}else{
    			low = mid + 1;
    		}
    	}
    	return ans;
    }
    
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
       return lowerBound(Arr, N, k);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends