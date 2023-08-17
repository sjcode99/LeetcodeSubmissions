class Solution {
private:
    bool IsPossible(vector<int>& bloom, int m, int k, int day){
        int cnt = 0, val = 0;
        for(int i=0; i<bloom.size(); i++){
            if(bloom[i] <= day){
                cnt++;
            }
            else{
                val += cnt/k;
                cnt = 0;
            }
        }
        val += cnt/k;
        if(val >= m) return true;
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1LL *k *1LL;
        if(bloomDay.size() < val) return -1;
        
        int maxi = INT_MIN, mini = INT_MAX;
        for(auto it: bloomDay){
            mini = min(mini, it);
            maxi = max(maxi, it);
        }
        
        int low = mini, high = maxi, ans = high;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(IsPossible(bloomDay, m, k, mid)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};