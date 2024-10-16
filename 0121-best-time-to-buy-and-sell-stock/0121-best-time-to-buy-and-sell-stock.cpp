class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int el = prices[0];
        int mx = INT_MIN, profit = 0;
        for(auto it: prices){
            profit = it - el;
            
            if(profit < 0){
                el = it;
                profit = 0;
            }else{
                mx = max(mx, profit);
            }
        }
        return mx;
    }
};