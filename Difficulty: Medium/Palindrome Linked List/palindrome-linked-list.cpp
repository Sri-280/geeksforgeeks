/*
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
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        stack<int> s;
        Node* curr = head;
        while (curr != nullptr) {
            s.push(curr->data);
            curr = curr->next;
        }
        Node* temp = head;
        int n=s.size();
        for(int i=0;i<=n/2;i++){
            int a=s.top();
            s.pop();
            int b=temp->data;
            if(a!=b) return false;
            temp=temp->next;
        }
        return true;
    }
};