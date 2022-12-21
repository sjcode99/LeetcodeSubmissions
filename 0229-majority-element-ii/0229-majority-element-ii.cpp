class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1=0, cnt2=0, el1=-1, el2=-1;
        
        for(auto it: nums){
            if(el1 == it) 
                cnt1++;
            else if(el2 == it)
                cnt2++;
            else if(cnt1 == 0){
                el1 = it;
                cnt1 = 1;
            }else if(cnt2 == 0){
                el2 = it;
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = cnt2 = 0;
        for(auto it: nums){
            if(it == el1) cnt1++;
            else if(it == el2) cnt2++;
        }
        if(cnt1 > n/3) ans.push_back(el1);
        if(cnt2 > n/3) ans.push_back(el2);
        
        return ans;
    }
};