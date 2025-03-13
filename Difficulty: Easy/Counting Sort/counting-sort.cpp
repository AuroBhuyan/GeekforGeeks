//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
      int mx = *max_element(arr.begin(),arr.end());
      vector<int> px(mx+1,0);
      vector<char> ans(arr.size());
      
      for(auto x:arr){
         px[x-'a']++; 
      }
      
      for(int i=1;i<=mx;i++){
          px[i] += px[i-1];
      }
      
      for(int i=arr.size()-1;i>=0;i--){
          px[arr[i]-'a']--;
          ans[px[arr[i]-'a']] = arr[i];
      }
      
      string s = "";
      for(auto x:ans){
          s+=x;
      }
      
      
      
      return s;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends