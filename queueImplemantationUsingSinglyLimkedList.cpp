#include<bits/stdc++.h>
using namnesapce std;

Class Node {
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Queue {
    Node*head = NULL;
    Node*tail = NULL;
    int size = 0;

    void push(int val) {
        size++;
        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop(){
        size--;
        Node*headNode = head;
        head = head->next;
        delete headNode;
        if(headNode == NULL){
            tail = NULL;

        }
    }
    int front (){
        return head->val;
    }

    int back(){
        return tail->val;
    }
    int size(){
        return size;
    }

    bool empty(){

        //return head == NULL;
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

}

int main(){

    myQueue q;
    int n;
    cin>>n;
    for(int i= 0; i<=n;i++){
        int val;
        cin>>val;
        q.push(val);

    }
    while(!q.empty(){
        cout<<q.front()<<endl;
        q.pop();

    })
    return 0 ;
}