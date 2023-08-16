class Solution {
private:
    long long findTotalHours(vector<int>& piles, int val){
        long long totalHr = 0;
        for(auto it: piles){
            totalHr += ceil((double)it / (double)val);
        }
        return totalHr;
    }
    
    int findMax(vector<int>& piles){
        int maxi = INT_MIN;
        for(auto it: piles){
            maxi = max(maxi, it);
        }
        return maxi;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        int ans = INT_MAX;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            long long totalHrs = findTotalHours(piles, mid);
            if(totalHrs <= h){
                ans = min(ans, mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};