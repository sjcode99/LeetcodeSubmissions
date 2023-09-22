class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = prices[0];
        int maxPro = 0, pro = 0;
        for(auto it: prices){
            if(price > it) price = it;
            
            pro = it - price;
            maxPro = max(maxPro, pro);
        }
        return maxPro;
    }
};