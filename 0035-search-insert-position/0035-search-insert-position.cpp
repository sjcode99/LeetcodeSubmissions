class Solution {
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
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        return lowerBound(nums, n, target);
    }
};