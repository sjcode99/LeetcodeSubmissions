class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int opened = 0;
        for(char ch: s){
            if(ch == '(' && opened++ > 0) res += ch;
            if(ch == ')' && opened-- > 1) res += ch;
        }
        return res;
    }
    
};