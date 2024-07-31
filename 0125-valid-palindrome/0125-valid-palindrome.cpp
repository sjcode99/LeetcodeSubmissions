class Solution {
private:
    char islower(char ch){
        if(ch>=97 && ch<=122) return ch;
        else{
            ch += 32;
            return ch;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i])) temp += s[i];
        }
        int n = temp.size()-1;
        for(int i=0; i<temp.size(); i++){
            if(islower(temp[i]) != islower(temp[n-i])) return false;
        }        
        return true;    
    }
};