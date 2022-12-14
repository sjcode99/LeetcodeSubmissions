class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 ||n == 1) return 0;
        int cnt = 0;
        vector<bool> isprime(n,true);
        
        for(int i=2; i<n; i++){
            if(isprime[i]){
                cnt++;
                for(int j=2*i; j<n; j+=i){
                    isprime[j] = false;
                }
            }
        }
        return cnt;
    }
};