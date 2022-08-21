//n to 1 using backtracking.
#include<iostream>
using namespace std;

void func(int i, int n)
{
    if(i < 1)
        return;
    cout<<i<<" "; // 10 9 8 7 6 5 4 3 2 1 ---> 10 to 1.
    func(i-1,n);
}
int main()
{
    int i = 10;
    int n = 10;
    func(i,n);
    return 0;
}
