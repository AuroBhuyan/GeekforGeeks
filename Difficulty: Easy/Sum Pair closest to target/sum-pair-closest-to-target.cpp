//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
     vector<int> sumClosest(vector<int>& arr, int target) {
        
        if (arr.size() < 2) return {};
        
        vector<int> a(2);  
        int ans = INT_MAX;
        int l = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = l - 1;
        
        while (i < j) {
            int x = arr[i] + arr[j];  
            
            if (abs(target - x) < ans) {
                ans = abs(target - x);  
                a[0] = arr[i];  
                a[1] = arr[j];  
            }
            
            if (x < target) {
                i++;  
            } else {
                j--;  
            }
        }
        
        return a;  
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends