class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ump;
        vector<int> ans;
        stack<int> s;
        
        int len2 = nums2.size();
        for(int i=len2-1; i>=0; i--){
            while(!s.empty() && nums2[i] >= s.top()) s.pop();
            
            ump[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }
        
        for(auto it: nums1){
            ans.push_back(ump[it]);
        }
        return ans;
    }
};