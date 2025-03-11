//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    vector<string> keypad = {
        "2", "22", "222",    // A, B, C
        "3", "33", "333",    // D, E, F
        "4", "44", "444",    // G, H, I
        "5", "55", "555",    // J, K, L
        "6", "66", "666",    // M, N, O
        "7", "77", "777", "7777", // P, Q, R, S
        "8", "88", "888",    // T, U, V
        "9", "99", "999", "9999"  // W, X, Y, Z
    };
    
    string ans = "";
    for(auto x:S){
        if(x==' ')
        ans += '0';
        else
        ans += keypad[toupper(x)-'A'];
    }
    
    return ans;
}