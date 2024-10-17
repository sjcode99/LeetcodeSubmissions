class Solution {
private:
    bool isPal(string s, int i, int j){
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else return false;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int len = s.size();
        int i = 0, j = len-1;
        
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else 
                return (isPal(s, i+1, j)) || (isPal(s, i, j-1));
        }
        return true;
    }
};