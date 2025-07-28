class Solution {
  public:
    int repeatedSumOfDigits(int N) {
        return 1+(N-1)%9;
    }
};
