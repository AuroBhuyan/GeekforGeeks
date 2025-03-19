//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        for(auto x:s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }
            else
            {   if(st.empty()) return false;
                if((x==')' && st.top()=='(') || (x=='}' && st.top()=='{') || (x==']' && st.top()=='[')){
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends