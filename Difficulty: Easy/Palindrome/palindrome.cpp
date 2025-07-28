class Solution {
  public:
    bool isPalindrome(int n) {
        int rev = 0;
        int N = n;
        while(n){
            int rem = n%10;
            n = n/10;
            rev = rev*10+rem;
        }
        
        if(rev==N)return true;
        else
        return false;
    }
};