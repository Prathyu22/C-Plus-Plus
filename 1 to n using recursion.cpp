//1 to n using recursion.
#include<iostream>
using namespace std;

void func(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout<<i<<" ";
    func(i+1, n);
}

int main()
{
    int i = 1;
    int n = 10;
    func(i,n);
    return 0;
}

