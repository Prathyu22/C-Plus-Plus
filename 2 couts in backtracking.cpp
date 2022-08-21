//backtracking.
#include<iostream>
using namespace std;

void func(int i, int n)
{
    if(i < 1)
        return;
    cout<<i<<" "; // 10 9 8 7 6 5 4 3 2 1 ---> 10 to 1.
    func(i-1,n);
    cout<<i<<" "; //1 2 3 4 5 6 7 8 9 10  ---> 1 to 10.
}
int main()
{
    int i = 10;
    int n = 10;
    func(i,n);
    return 0;
}
