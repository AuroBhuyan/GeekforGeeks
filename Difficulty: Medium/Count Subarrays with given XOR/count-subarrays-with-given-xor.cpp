//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        
        long x = 0;
        int l=arr.size();
        vector<long> prefixSum;
        
        for(int i=0;i<l;i++){
            x^=arr[i];
            prefixSum.push_back(x);
        }
        
        long c = 0;
        long val;
        unordered_map<long,long> umap;
        for(int j=0;j<l;j++){
            if(prefixSum[j]==k) 
            c++;
            
            val = prefixSum[j]^k;
            if(umap.find(val)!=umap.end())
            c+=umap[val];
            
            
            if(umap.find(prefixSum[j])==umap.end())
            umap[prefixSum[j]] = 0;
            
            
            umap[prefixSum[j]]++;
        }
        
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends