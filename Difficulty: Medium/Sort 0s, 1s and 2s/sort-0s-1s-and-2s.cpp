//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
     int c0 = 0;
     int c1 = 0;
     int c2 = 0;
     for(auto x:arr){
         if(x==0) c0++;
         if(x==1) c1++;
         if(x==2) c2++;
     }
     
     for(int i=0;i<c0;i++){
         arr[i] = 0;
     }
     for(int i=c0;i<c1+c0;i++){
         arr[i] = 1;
     }
     for(int i=c0+c1;i<c2+c1+c0;i++){
         arr[i] = 2;
     }


    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends