class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro=1, maxPro1= INT_MIN, maxPro2= INT_MIN;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            pro = pro * nums[i];
            
            maxPro1 = max(maxPro1, pro);
            if(pro == 0) pro = 1;
        }
        pro = 1;
        for(int i=n-1; i>=0; i--){
            pro = pro * nums[i];
            
            maxPro2 = max(maxPro2, pro);
            if(pro == 0) pro = 1;
        }
        
        return max(maxPro1, maxPro2);
    }
};