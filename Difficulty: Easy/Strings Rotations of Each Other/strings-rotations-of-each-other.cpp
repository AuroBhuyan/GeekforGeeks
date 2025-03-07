//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        s1 = s1+s1;
        int n = s1.size();
        int m = s2.size();
        vector<int> lps(m,0);
        int l=0;
        int i=1;
        
        //lps
        while(i<m){
            if(s2[i]==s2[l]){
                l++;
                lps[i] = l;
                i++;
            }
            else{
                if(l!=0){
                    l=lps[l-1];
                }
                else
                {
                    i++;
                }
            }
        }
        
        
        //kmp
        i = 0;
        int j = 0;
        
        while(i<n){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            if(j==m){
                return true;
            }
            else if(i<n && s1[i]!=s2[j]){
                if(j!=0){
                    j = lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends