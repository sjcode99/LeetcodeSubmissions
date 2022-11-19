class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(int it:nums){
            res.push_back(it*it);
        }
        sort(res.begin(), res.end());
        return res;
    }
};