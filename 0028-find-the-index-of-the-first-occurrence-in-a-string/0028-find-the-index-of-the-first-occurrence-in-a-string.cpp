class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_size = haystack.size();
        int n_size = needle.size();
        int cnt = 0;
        
        for(int i=0; i<h_size; i++){
            if(haystack[i] == needle[cnt]) cnt++;
            else{
                i = i - cnt;
                cnt = 0;
            }
            
            if(cnt == n_size) return i - cnt + 1;
        }
        return -1;
    }
};