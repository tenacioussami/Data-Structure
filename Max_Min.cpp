#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
       int val = 0;
       Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    
};
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node *newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
     tail->next = newnode;
     tail = newnode;
}
int find_difference(Node* head) {
    if (head == NULL){
        return 0;
    } 
    
    
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    Node* temp = head;
    
    while (temp != NULL) {
        minVal = min(minVal, temp->val);
        maxVal = max(maxVal, temp->val);
        temp = temp->next;
    }
    
    return maxVal - minVal;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }
    
    cout << find_difference(head) << endl;
    
    return 0;
}