class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') stk.push(s[i]);
            else{
                if(!stk.empty()){
                    char ch = stk.top();
                    if((s[i] == ')' && ch == '(') ||
                    (s[i] == ']' && ch == '[') ||
                    (s[i] == '}' && ch == '{')){
                        stk.pop();
                    }else return false;
                }else return false;
            }
        }
        return stk.empty();
    }
};