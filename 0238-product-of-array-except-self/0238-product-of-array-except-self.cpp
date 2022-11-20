class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         with O(N) && O(1)
        int n = nums.size();
        vector<int> rightPro(n);
        
        rightPro[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            rightPro[i] = rightPro[i+1]*nums[i+1];
        }
        
        int leftPro=1;
        for(int i=0; i<n; i++){
            rightPro[i] = rightPro[i] * leftPro;
            leftPro = leftPro * nums[i];
        }
        
        return rightPro;
         
    }
};