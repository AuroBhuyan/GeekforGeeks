class Solution {
  public:
    int reverseDigits(int n) {
        int rev = 0;
        while(n){
            int rem = n%10;
            n = n/10;
            rev = rev*10+rem;
        }
        
        return rev;
    }
};