//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        int n = s.size();
        vector<int> lps(n,0);
        int l = 0;
        int i = 1;
        while(i<n){
            if(s[i] == s[l]){
                l++;
                lps[i] = l;
                i++;
            }
            else
            {
                if(l!=0)
                l = lps[l-1];
                else
                i++;
            }
        }
        
        return l;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.longestPrefixSuffix(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends