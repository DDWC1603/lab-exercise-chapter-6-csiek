//its just an array example
//find the sum of all the value inside the array
#include <iostream>
using namespace std;

int ary[]={5,4,6,7,7};

int n, result=0;

int main()
{

	for(n=0; n<10; n++)
	{
		result += ary[n];
	}
	cout<<result;
	
}
