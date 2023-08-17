//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    int calculateSum(vector<int>& nums, int divisor){
        int sum = 0;
        for(auto it: nums){
            sum += ceil(it * 1.0/divisor * 1.0);
        }
        return sum;
    }
  public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int maxi = INT_MIN;
        for(auto it: nums){
            maxi = max(maxi, it);
        }
        
        int low = 1, high = maxi, ans = maxi;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(calculateSum(nums, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends