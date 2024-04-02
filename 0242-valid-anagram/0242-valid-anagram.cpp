class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<int> cnt = vector<int>(26,0);
        for(int i=0; i<s.length(); i++){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }
        
        for(auto it:cnt){
            if(it != 0) return false;
        }
        return true;
    }
};