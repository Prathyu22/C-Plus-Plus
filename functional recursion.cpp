//functional recursion.
#include<iostream>
using namespace std;
int sum = 0;
int func(int n)
{
    if(n == 0)
        return sum;
    else
    {
        int sum = n + func(n-1);
    }
}

int main()
{
    int n = 5;
    int s = func(n);
    cout<<s;
    return 0;
}
