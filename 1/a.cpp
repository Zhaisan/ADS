#include <iostream>
using namespace std;
 
struct Node {
  string word;
  Node* next;
 
  Node() {}
 
  Node(string word) {
    this->word = word;
    this->next = NULL;
  }
};
 
// your code goes here

Node* cyclicShift(Node* head, int k) {
    Node * tail = head;
    for(int i = 0; i < k - 1; i++){
        tail = tail->next;
    }
    Node *head2 = tail->next;
    tail->next = NULL;
    tail = head2;

    while(tail->next != NULL){
        tail = tail->next;
    }

    tail->next = head;
    
    return head2;
}
 
 
void print(Node* head) {
  Node* cur = head;
  while (cur != NULL) {
    cout << cur->word << " ";
    cur = cur->next;
  }
  cout << endl;
}
 
int main() {
  int n; cin >> n;
  int k; cin >> k;
  Node* head;
  Node* cur;
  for (int i = 0; i < n; i++) {
    string word; cin >> word;
    if (i == 0) {
      head = new Node(word);
      cur = head;
    } else {
      cur->next = new Node(word);
      cur = cur->next;
    }
  }
 
  head = cyclicShift(head, k);
  print(head);
}
;