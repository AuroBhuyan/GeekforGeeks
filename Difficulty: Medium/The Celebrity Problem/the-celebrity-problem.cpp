//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        int t = 0;
        int b = m-1;
        while(t<b){
            if(mat[t][b]==1)
                t++;
            else if(mat[b][t]==1)
                b--;
            else
               {
                   t++;
                   b--;
               }
        }
        
        if(t>b) return -1;
        for(int i=0;i<m;i++){
            if(t==i) continue;
            if(mat[t][i]==0 && mat[i][t]==1) 
            int x = 0;
            else
            return -1;
        }
        
        return t;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends