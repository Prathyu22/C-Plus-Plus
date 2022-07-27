//emplace() --> used to insert a new element into the stack container.
//SYNTAX: stackname.emplace(value)

/*
Difference between stack::emplace() and stack::push() function.
While push() function inserts a copy of the value or the parameter passed to the function into the container at the top,
the emplace() function constructs a new element as the value of the parameter and then adds it to the top of the container.
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> mystack;
  mystack.emplace(1);
  mystack.emplace(2);
  mystack.emplace(3);
  mystack.emplace(4);
  mystack.emplace(5);
  mystack.emplace(6);
  cout << "mystack = ";
  while (!mystack.empty()) {
    cout << mystack.top() << " "; // 6 5 4 3 2 1
    mystack.pop();
  }
  return 0;
}