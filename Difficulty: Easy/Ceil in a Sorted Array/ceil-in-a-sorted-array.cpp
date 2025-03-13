//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int i=0;
        int j = n-1;
        
        
        int l = -1;
        while(i<=j){
            int m = i+(j-i)/2;
            if(arr[m]==x){
                l=m;
                j = m-1;
            }
            else if(arr[m]<x){
                i=m+1;
            }
            else{
                j=m-1;
                l = m;
            }
        }
        
        return l;
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
        string xs;
        getline(cin, xs);
        int x = stoi(xs);
        Solution ob;
        int ans = ob.findCeil(arr, x);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends