// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int N=n;
        int sum = 0;
        while(n){
            int d = n%10;
            sum = sum + pow(d,3);
            n = n/10;
        }
        
        return sum==N;
    }
};