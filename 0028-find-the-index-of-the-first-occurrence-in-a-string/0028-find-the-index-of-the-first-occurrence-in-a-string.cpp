class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.size();
        int nlen = needle.size();
        int cnt = 0;
        for(int i=0; i<hlen; i++){
            if(haystack[i] == needle[cnt]) cnt++;
            else{
                i = i - cnt;
                cnt = 0;
            }
            
            if(cnt == nlen) return i - cnt + 1;
        }
        return -1;
    }
};