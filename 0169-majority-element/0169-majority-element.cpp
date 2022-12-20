class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, el = 0;
        for(auto it: nums){
            if(cnt == 0) el = it;
            
            if(el == it) cnt++;
            else cnt--;
        }
        return el;
    }
};