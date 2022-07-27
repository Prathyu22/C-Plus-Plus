//swap() in stacks
//syntax : stack1.swap(stack2)
#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack <int> stack1;

    stack <int> stack2;

    stack1.push(10);
    stack1.push(20);

    stack2.push(30);
    stack2.push(40);

    stack1.swap(stack2);

    cout<<"stack1: ";

    while (!stack1.empty())
    {
        cout<<" "<<stack1.top(); // 40 30
        stack1.pop();
    }

    cout<<endl;
    cout<<"stack2: ";

    while (!stack2.empty())
    {
        cout<<" "<<stack2.top(); // 20 10
        stack2.pop();
    }

    return 0;
}