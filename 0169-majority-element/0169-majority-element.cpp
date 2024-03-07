class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = 0, cnt=0;
        
        for(auto it: nums){
            if(cnt == 0) el = it;
            
            if(it == el) cnt++;
            else cnt--;
        }
        return el;
    }
};