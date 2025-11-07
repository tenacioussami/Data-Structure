#include<bits/stdc++.h>
using namnesapce std;


class Queue {
     public:
    list<int> l;
   

    void push(int val) {
       return l.push_back(val);

        }
       
    }
    void pop(){
       return l.pop_front();
       

        }
    
    int front (){
        return l.front();
       
    }

    int back(){
        return l.back();
    }
    int size(){
      return  l.size();
    }

    bool empty(){

        return l.empty();

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