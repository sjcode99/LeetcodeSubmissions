//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int low, int high, int target){

        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1 ;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends