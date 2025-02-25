//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int> ans(2);

        int i=0;
        int j=arr.size()-1;
        int mid;
        int first = -1;
        while(i<=j){
           mid = i + (j-i)/2;

           if(arr[mid]==x)
           {
            first = mid;
            j = mid-1;
           }

          else if(x<arr[mid])
           j = mid-1;
           else
           i = mid+1;
        }

         i=0;
         j=arr.size()-1;
        int last = -1;
        while(i<=j){
           mid = i + (j-i)/2;

           if(arr[mid]==x)
           {
            last = mid;
            i =mid+1;
           }

          else if(x<arr[mid])
           j = mid-1;
           else
           i = mid+1;
        }

       ans[0] = first;
       ans[1] = last;
       return ans;

    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends