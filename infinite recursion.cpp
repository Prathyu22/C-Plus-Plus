//Infinite recursion.
#include<iostream>
using namespace std;

void func(int i)
{
    cout<<i<<" ";
    func(i); //segmentation fault //stack overflow
    // The function doesn't get terminated and it waits in the stack. Hence stack overflow.
}

int main()
{
    int i = 0;
    func(i);
    return 0;
}
