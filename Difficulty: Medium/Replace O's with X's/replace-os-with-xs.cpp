//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
    void dfs(int i,int j,vector<vector<char>> &mat){
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j]!='O') return;
        
        mat[i][j] = '#';
        
        dfs(i+1,j,mat);
        dfs(i,j+1,mat);
        dfs(i-1,j,mat);
        dfs(i,j-1,mat);
    }
  
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1)&&mat[i][j]=='O'){
                    dfs(i,j,mat);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O')
                mat[i][j] = 'X';
                else if(mat[i][j]=='#')
                mat[i][j] = 'O';
            }
        }
        
        return mat;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        Solution ob;
        vector<vector<char>> ans = ob.fill(mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends