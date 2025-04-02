//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int ans = INT_MAX;
        int i=-1;
        int l = 0;
        int r = arr.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(arr[l]<=arr[m] ){
                 if(arr[l]<ans){
                ans = arr[l];
                i = l;
                 }
                  l = m+1;
            }
            else
            {
                if(arr[m]<ans){
                    ans = arr[m];
                    i = m;
                }
                r = m-1;
            }
        }
        return i;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends