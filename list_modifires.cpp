#include<bits/stdc++.h>
using namespace std;

int main()
{
    list <int> l = {10,20,30};
    //list<int>l2;
    //l2 = l;
    //l2.assign(l.begin(),l.end());
    //l.push_back(40);
    //l.push_front(100);

    //l.pop_back();
    //l.pop_front();
    //cout<<*next(l.begin(),2);
    //l.erase(next(l.begin(),2),next(l.begin(),5));

    //replace(l.begin(),l.end());
    auto it = find(l.begin(),l.end());
    if(it == l.end())
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found"<<endl;
    }

    
     
    for(int val:l)
    {
        cout<<val<<endl;
    }
    return 0;

}