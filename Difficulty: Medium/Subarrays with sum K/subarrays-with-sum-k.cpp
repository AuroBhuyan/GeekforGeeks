//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int> umap;
        vector<int> prefix;
        int l = arr.size();
        int s=0;
        for(int i=0;i<l;i++){
            s+=arr[i];
            prefix.push_back(s);
        }
        
        int c=0;
        for(int j=0;j<l;j++){
            if(prefix[j]==k)
            c++;
            
            int psi = prefix[j]-k;
            if(umap.find(psi)!=umap.end()){
                c+=umap[psi];
            }
            
            if(umap.find(prefix[j])==umap.end()){
                umap[prefix[j]] = 0;
            }
            umap[prefix[j]]++;
        }
        
        return c;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends