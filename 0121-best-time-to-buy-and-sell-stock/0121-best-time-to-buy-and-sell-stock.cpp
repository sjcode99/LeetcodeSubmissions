class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPro= 0;
        int min= INT_MAX;
        
        for(auto it:prices){
            if(it<min) min= it;
            maxPro= max(maxPro, it-min);
        }
        return maxPro;
    }
};