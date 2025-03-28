//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);

cout << "~" << "\n";
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void arrange(stack<int> &s,int x){
    if(s.empty() || x>s.top()){
        s.push(x);
        return;
    }
    
    int ele = s.top();
    s.pop();
    arrange(s,x);
    
    s.push(ele);
    
}
void mysort(stack<int> &s){
    if(s.empty()){
        return;
    }
    
    int ele = s.top();
    s.pop();
    mysort(s);
    
    arrange(s,ele);
}

void SortedStack :: sort()
{
   //Your code here
   mysort(s);
}


