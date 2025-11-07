#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30,40,50,60,70};
   // l.sort(greater<int>());
    l.unique();

    l.remove(30);
    l.reverse();
    for(int val : l)
    {
        cout<<val<<endl;

    }
    return 0;
}