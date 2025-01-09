//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        int l = arr.size();
        vector<int> preSum;
        int s = 0;
        for(int i=0;i<l;i++){
            s+=arr[i];
            preSum.push_back(s);
        }
        
        unordered_map<int,int> umap;
        
        for(int j=0;j<l;j++){
           int i = preSum[j] - target;
           
           if(preSum[j]==target)
           {
               return {1,j+1};
           }
           
           if(umap.find(i)!=umap.end()){
               ans.push_back(umap[i]+2);
               ans.push_back(j+1);
               return ans;
           }
           umap[preSum[j]] = j; 
        }
        
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends