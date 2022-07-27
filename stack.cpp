/*
Stacks are a type of container adapters with LIFO type of working.
Stack uses an encapsulated object of either vector or deque (by default) or list.
STACK SYNTAX :
For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:
------> template <class Type, class Container = deque<Type> > class stack;
Functions associated with stack are : All are of TC = O(1)
empty()
size()
top()
push(g)
pop()
*/

#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack <int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    while (!stack.empty())
    {
        cout<<" "<<stack.top(); // 40 30 20 10
        stack.pop();
    }
    return 0;
}