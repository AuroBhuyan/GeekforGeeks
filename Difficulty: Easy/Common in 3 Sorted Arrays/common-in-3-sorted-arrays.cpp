//{ Driver Code Starts
// here

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        int m = arr1.size();
        int n = arr2.size();
        int o = arr3.size();
        int i=0,j=0,k=0;
        
        vector<int> ans;
        while(i<m && j<n && k<o){
            if((arr1[i]==arr2[j]) && arr1[i]==arr3[k]){
                
                if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
                
                i++;
                j++;
                k++;
            }
            else if((arr1[i]<arr2[j])||arr1[i]<arr3[k]) i++;
            else if((arr2[j]<arr1[i])||arr2[j]<arr3[k]) j++;
            else if((arr3[k]<arr2[j])||arr3[k]<arr1[i]) k++;
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl << "~\n";
    }
}
// } Driver Code Ends