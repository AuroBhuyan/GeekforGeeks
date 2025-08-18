class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int length = arr.size();
        for(int i=0;i<length;i+=k){
            int start = i;
            int end = min(i+k-1,length-1);
            while(start<=end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    }
};
