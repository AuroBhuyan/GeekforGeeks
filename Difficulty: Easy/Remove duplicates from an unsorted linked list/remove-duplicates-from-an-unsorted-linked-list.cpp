//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        unordered_set<int> seen;
        
        if(!head)return head;
        Node* curr = head;
        seen.insert(curr->data);
        
        while(curr && curr->next){
            if(seen.find(curr->next->data)!=seen.end()){
                curr->next = curr->next->next;
            }
            else
            {
                seen.insert(curr->next->data);
                curr = curr->next;
            }
        }
        
        return head;
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

        if (arr.empty()) {
            cout << "empty" << endl;
            continue;
        }

        Node *head = new Node(arr[0]);
        Node *tail = head;

        for (size_t i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        Node *result = ob.removeDuplicates(head);
        printList(result);
    }

    return 0;
}

// } Driver Code Ends