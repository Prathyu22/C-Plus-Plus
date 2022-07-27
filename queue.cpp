/*
Queue functions:
   push()
   pop()
   front()
   back()
   empty()
   size()
   swap()
   emplace()
*/

#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    while(!q.empty())
    {
        cout<<q.front()<<" "; //10 20 30 40 50
        q.pop();
    }
    return 0;
}