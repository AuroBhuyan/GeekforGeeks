class Solution {
  public:
    int sumOfDigits(int n) {
        int num = n;
        int rev = 0;
        while(num){
            int rem = num%10;
            num  = num/10;
            rev = rev+rem;
        }
        
        return rev;
    }
};