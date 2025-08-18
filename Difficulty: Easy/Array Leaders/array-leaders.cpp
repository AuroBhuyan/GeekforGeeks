

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int maxElement = INT_MIN;
        int length = arr.size();
        for(int i=length-1;i>=0;i--){
            if(arr[i]>=maxElement)
            ans.push_back(arr[i]);
            
            maxElement = max(arr[i],maxElement);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};