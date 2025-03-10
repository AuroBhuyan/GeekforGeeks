//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  void merge(vector<int>& arr,int l,int m,int r){
      vector<int> temp;
      int i=l;
      int j=m+1;
      while(i<=m && j<=r){
          if(arr[i]<arr[j]){
          temp.push_back(arr[i]);
          i++;
          }
          else{
          temp.push_back(arr[j]);
          j++;
          }
      }
      
      while(i<=m){
          temp.push_back(arr[i]);
          i++;
      }
      
      while(j<=r){
          temp.push_back(arr[j]);
          j++;
      }
      
      for(int x = l;x<=r;x++){
          arr[x] = temp[x-l];
      }
      
  }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r) return;
        
        
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends