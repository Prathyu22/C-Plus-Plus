//https://www.hackerrank.com/challenges/cpp-sets/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,q_no;
    cin>>q_no;
    int num;
    set<int> s;
    
    for(int i=0; i<q_no; i++)
    {
        cin>>q;
        switch(q)
        {
            case 1:
              cin>>num;
              s.insert(num);
              break;
            case 2:
              cin>>num;
              if(s.find(num) != s.end())
                s.erase(num);
              break;
            case 3:
              cin>>num;
              if(s.find(num) != s.end())
                cout<<"Yes"<<endl;
              else
                cout<<"No"<<endl;
              break;           
        }
    }
    return 0;
}



