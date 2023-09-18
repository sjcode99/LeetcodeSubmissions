class Solution {
private:
    void reverse(vector<int>& nums, int i, int j){
        while(i<=j){
            int temp = nums[i];
            nums[i++] = nums[j];
            nums[j--] = temp;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return;
        
        k = k%n;
        
        reverse(nums, 0, n-k-1);        //part 1
        reverse(nums, n-k, n-1);        //part 2
        reverse(nums, 0, n-1);          //whole array
        
    }
};