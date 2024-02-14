class Solution {
public:
    bool isValid(string str) {
        stack<char> stk;
        for(int i=0; i<str.size(); i++){
            
            if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
                stk.push(str[i]);
            }else{
                if(!stk.empty()){
                    char ch = stk.top();
                
                    if((str[i] == ')' && ch == '(') ||
                       (str[i] == ']' && ch == '[') ||
                       (str[i] == '}' && ch == '{')){
                        stk.pop();
                    }else return false;
                }else return false;
            }
        }
        
        return stk.empty();
    }
};