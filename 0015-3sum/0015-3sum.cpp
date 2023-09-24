class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int> > res;
        
        for(int i=0; i<n-1; i++){
            if(i == 0 || (i<n && nums[i] != nums[i-1])){
                int lt=i+1, rt=n-1, sum = 0-nums[i];
                
                while(lt < rt){
                    if(nums[lt] + nums[rt] == sum){
                        vector<int> temp;
                        temp.push_back(nums[lt]);
                        temp.push_back(nums[rt]);
                        temp.push_back(nums[i]);
                        res.push_back(temp);
                        
                        while(lt < rt && nums[lt] == nums[lt+1]) lt++;
                        while(lt < rt && nums[rt] == nums[rt-1]) rt--;
                        
                        lt++;
                        rt--;
                    }
                    else if(nums[lt] + nums[rt] < sum) lt++;
                    else rt--;
                }
            }
        }
        return res;
    }
};