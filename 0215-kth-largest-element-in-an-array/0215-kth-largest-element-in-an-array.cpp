class Solution {
public:
    int partition(vector<int>& nums, int s, int e){
        int pivot = nums[s];
        int cnt=0;
        for(int i=s+1; i<=e; i++){
            if(nums[i] <= pivot) cnt++;
        }
        
        int pivotIndex = s + cnt;
        swap(nums[pivotIndex], nums[s]);
        
        int l=s, r=e;
        while(l<pivotIndex && r>pivotIndex){
            while(nums[l] <= pivot) l++;
            while(nums[r] > pivot) r--;
            
            if(l<pivotIndex && r>pivotIndex){
                swap(nums[l++], nums[r--]);
            }
        }
        return pivotIndex;
    }
    
// by default code  
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0, right=n-1, ans;
        
        while(true){
            int idx = partition(nums, left, right);
            if(idx == n-k){
                ans = nums[idx];
                break;
            }
            else if(idx < n-k) {
                left = idx + 1;
            }
            else {
                right = idx - 1;
            }          
        }
        return ans;
       
    }
};