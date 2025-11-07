#include<bits/stdc++.h>
using namespace std;

for(Node *i = head,*j = tail; i! = j && i ->prev! = j; i = j->next, j = j->prev)
{
    swap(i->val,j->val);
}