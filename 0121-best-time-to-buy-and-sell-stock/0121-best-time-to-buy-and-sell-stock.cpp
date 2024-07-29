class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0], p=0;
        for(int i=1; i<prices.size(); i++){
            int c = prices[i] - mini;
            p = max(p, c);
            mini = min(prices[i], mini);
        }
        return p;
    }
};