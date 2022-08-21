//reversing an array using recursion.
#include<iostream>
using namespace std;

void func(int l, int r, int a[])
{
    if(l >= r){
        for(int i=0; i<3; i++)
        {
            cout<<a[i]<<" ";
        }
        return;
    }
    swap(a[l],a[r]);
    func(l+1,r-1,a);
}

int main()
{
    int a[] = {1,2,3};
    int n = 3;
    func(0,n-1,a);
    return 0;
}
