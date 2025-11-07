#include<bits/stdc++.h>
using namespace std;

class myStack {

    list<int> v;

    public:
    void push (int val){
        v.push_back(val);

    }
    void pop (){
        v.pop_back();
    }

    void top (){
        return v.back();

    }
    void size (){
        return v.size();

    }

    bool empty (){
        return v.empty();

    }

};

int main(){
    myStack st;
    return 0;
}