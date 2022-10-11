class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> ump;
        string ans= "";
        
        for(int i=0; i<s.length(); i++){
            ump[s[i]]++;
        }
        
        vector<pair<int, char>> vec;
        
        for(auto it:ump){
            vec.push_back({it.second, it.first});
        }
        
        sort(vec.begin(), vec.end(), greater<>());
        
        for(auto it:vec){
            while(it.first--){
                ans.push_back(it.second);
            }
        }       
        return ans;
    }
};