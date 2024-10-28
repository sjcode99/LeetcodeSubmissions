class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        vector<string> v;
        string ans, word;
        
        while(str>>word){
            v.push_back(word);
        }
        
        reverse(v.begin(), v.end());
        
        for(auto it: v){
            ans += " " + it;
        }
        
        ans.erase(0, 1);
        return ans;
    }
};