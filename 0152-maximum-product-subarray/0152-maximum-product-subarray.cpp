class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1, max1= INT_MIN, max2 = INT_MIN;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            prod = prod * nums[i];
            
            if(max1 < prod) max1 = prod;
            if(prod == 0) prod=1;
        }
        prod = 1;
        for(int i=n-1; i>=0; i--){
            prod = prod * nums[i];
            
            if(max2 < prod) max2 = prod;
            if(prod == 0) prod=1;

        }
        
        return max(max1, max2);
    }
};