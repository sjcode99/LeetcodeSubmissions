class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = prices[0];
        int profit = 0, maxPro = 0;
        for(int i=1; i<prices.size(); i++){
            profit = prices[i] - mini;
            maxPro = max(maxPro, profit);
            if(prices[i] < mini) mini = prices[i];
        }
        return maxPro;
    }
};