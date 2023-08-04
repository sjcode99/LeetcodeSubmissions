class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mpp;
        
        int n = s.size();
        int lt=0, rt=0, maxLen = 0;
        
        while(rt < n){
            if(mpp.find(s[rt]) != mpp.end()){
                if(mpp[s[rt]] >= lt && mpp[s[rt]] <= rt)
                   lt = mpp[s[rt]] + 1;
            }
            maxLen = max(maxLen, rt - lt + 1);
            mpp[s[rt]] = rt;
            rt++;    
        }
        return maxLen;
    }
};