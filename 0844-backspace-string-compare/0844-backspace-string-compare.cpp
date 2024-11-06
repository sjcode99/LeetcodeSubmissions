class Solution {
private:
    void helper(stack<char> st, string str1, string &str2){
        for(auto it: str1){
            if(it == '#' && !st.empty()) st.pop();
            else if(it != '#') st.push(it);
        }
        finalString(st, str2);
    }
    
    void finalString(stack<char> st, string &str){
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            str.push_back(ch);
        }
    }
public:
    bool backspaceCompare(string s, string t) {
        string a, b;
        stack<char> st;
        
        helper(st, s, a);
        helper(st, t, b);
        
        if(a == b) return true;
        return false;
    }
};