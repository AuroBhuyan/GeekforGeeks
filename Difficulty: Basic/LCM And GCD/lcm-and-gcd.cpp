//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    vector<int> lcmAndGcd(int a, int b) {
        vector<int> ans(2);
        int x=a,y=b;
        while(a>0 && b>0){
            if(a>b) a%=b;
            else b%=a;
        }
        
        if(a>b) ans[1]=a; else ans[1]=b;
        ans[0] = (x*y)/ans[1];
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends