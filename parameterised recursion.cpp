//parameterised recursion.
#include<iostream>
using namespace std;
int sum = 0;
int func(int i, int n)
{
    //int sum = 0; if it is initialised here then the sum = 0 always.
    if(i > n)
        return sum;
    sum = sum + i;
    func(i+1, n);
}

int main()
{
    int i=1;
    int n = 5;
    int s = func(i,n);
    cout<<s<<endl;
    return 0;
}
