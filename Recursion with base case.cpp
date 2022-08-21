#include<iostream>
using namespace std;

void func(int i) //TC = o(n) and SC = o(n) where n = 5 here.
{
    if(i < 0) // base case
        return;
    cout<<i<<" ";
    func(i-1);
}
int main()
{
    int i = 5;
    func(i);
    return 0;
}

