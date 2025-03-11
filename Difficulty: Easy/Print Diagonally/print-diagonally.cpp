//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
	    vector<int> ans;
	    int i;
	    int j;
		for(int k=0;k<N;k++){
		    i = 0;
		    j = k;
		    while(j>=0){
		        ans.push_back(A[i][j]);
		        j--;
		        i++;
		    }
		}
		
		
		
		for(int k=1;k<N;k++){
		    i = k;
		    j = N-1;
		    while(i<N){
		        ans.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		}
		
		return ans;
	}

};


//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends