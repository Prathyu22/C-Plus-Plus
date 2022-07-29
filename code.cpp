//https://www.hackerearth.com/problem/algorithm/t-primes-c8a95cda/

#include <iostream>
using namespace std;

int main(){
	long int size;
	cin>>size;
	long int num;
	
	for(int i=0; i<size; i++)
	{
		cin>>num;
		int count = 1;

		for(int j=2; j<=num; j++)
		{
			if(num % j == 0)
			{
				count++;
				if(count > 3)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
		}
		if(count == 3)
				cout<<"YES"<<endl;
		else if(count < 3)
				cout<<"NO"<<endl;
	}
    
}