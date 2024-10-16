class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();
        for(int i=0; i<n; i++){
            char ch = strs[0][i];
            bool match = true;
                        
            for(int j=1; j<strs.size(); j++){
                if(ch != strs[j][i]) {
                    match = false;
                    break;
                }
            }
            if(!match) break;
            else ans.push_back(ch);
        }
        return ans;
    }
};