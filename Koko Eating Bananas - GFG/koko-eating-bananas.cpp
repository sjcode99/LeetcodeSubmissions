//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    int findMax(vector<int>& vec){
        int maxi = INT_MIN;
        for(auto it: vec){
            maxi = max(maxi, it);
        }
        return maxi;
    }
    
    int calculateTotalHours(vector<int>& vec, int hour){
        int total = 0;
        for(auto it: vec){
            total += ceil((double)it / (double)hour);
        }
        return total;
    }
  public:
    int Solve(int N, vector<int>& vec, int H) {
        int low = 1, high = findMax(vec);
        int ans = INT_MAX;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            int totalHrs = calculateTotalHours(vec, mid);
            
            if(totalHrs <= H){
                ans = min(ans, mid);
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends