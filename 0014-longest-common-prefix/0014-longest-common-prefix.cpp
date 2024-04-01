class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            bool mtch = true;
            
            for(int j=1; j<strs.size(); j++){
                if(ch != strs[j][i]){
                    mtch = false;
                    break;
                }
            }
            if(mtch == false) break;
            else ans.push_back(ch);
        }
        return ans;
    }
};