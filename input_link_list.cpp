#include <iostream>
using namespace std;

class Node {
    public:
        int val = 0;
        Node* next;
        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {

    Node *newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    //right now temp is at the last node    

}
    

void print_linked_list(Node* head) {
    Node* temp = head;
    int cnt= 0;
    while(temp != NULL) {
        cout << temp->val << endl;
        cnt++;
        //cout<<cnt++<<endl;

        temp = temp->next;
    }
}

int main() {
    Node*head =NULL;
    Node*tail = NULL;

    int val = 0;
    while(cin >> val){
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    return 0;
}
