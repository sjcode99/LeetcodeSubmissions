class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, el;
        int ans;
        
        for(auto it: nums){
            if(cnt == 0) el = it;
            
            el == it ? cnt++ : cnt--;
        }
        return el;
    }
};