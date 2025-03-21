//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
   void solve(stack<int>& s,int c,int l){
       if(c==l/2){
           s.pop();
           return;
       }
       
       c++;
       int e = s.top();
       s.pop();
       solve(s,c,l);
       s.push(e);
   }
   
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int c = 0;
        int l = s.size();
        solve(s,c,l);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends