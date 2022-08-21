#include<iostream>
using namespace std;

int func(int n)
{
    if(n <= 1)
        return n;
    else
    {
        return func(n-1) + func(n-2);
    }
}

int main()
{
    int n = 6;
    int fib = func(n);
    cout<<fib; //8
    return 0;
}
