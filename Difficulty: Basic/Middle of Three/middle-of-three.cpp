//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        return a+b+c - min(a,min(b,c)) - max(a,max(b,c));
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.middle(A, B, C) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends