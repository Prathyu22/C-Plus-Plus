//https://www.hackerrank.com/challenges/operator-overloading/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int n1;
        cin>>n1;
        vector<int>::iterator iter;
        iter = lower_bound(v.begin(), v.end(), n1);
        if( *iter == n1)
        {
            cout<<"Yes"<<" "<<iter - v.begin() +1<<endl;
        }
        else 
        {
            cout<<"No"<<" "<<iter - v.begin() +1<<endl;
        }
        
        
    }
    return 0;
}
