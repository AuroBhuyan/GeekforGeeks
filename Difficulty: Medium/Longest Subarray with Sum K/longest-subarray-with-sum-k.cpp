//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int> umap;
        
        int prefix = 0;
        int m = 0;
        
        for(int r=0;r<n;r++){
            prefix += arr[r];
            
            if(k==prefix)
            m = max(m,r+1);
            
            int l = prefix-k;
            if(umap.find(l)!=umap.end()){
                int t = umap[l];
                m = max(m,r-t);
            }
            
            if(umap.find(prefix)==umap.end()){
                umap[prefix] = r;
            }
        }
        
        return m;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends