//palindrome or not.
#include<iostream>
using namespace std;

int func(int i, string s, int n)
{
    if(i >= n/2)
    {
        return 1;
    }
    else{
        if(s[i] != s[n-i-1])
            return 0;
    }
    return func(i+1, s, n);
}

int main()
{
    string s = "MadaM"; //NOTE: palindrome check is case-sensitive.
    int flag = func(0,s,5);
    cout<<flag;
    return 0;
}
