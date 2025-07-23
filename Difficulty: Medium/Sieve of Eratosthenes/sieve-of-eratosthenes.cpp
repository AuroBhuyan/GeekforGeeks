class Solution {
  public:
    vector<int> sieve(int n) {
        vector<int> isPrime(n+1,1);
        isPrime[0] = isPrime[1] = 0;
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j] = 0;
                }
            }
        }
        
        vector<int> ans;
        for(int i=0;i<=n;i++){
            if(isPrime[i]){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};