#include<iostream>
using namespace std;

bool isEven(int num)
{
	// num-> 0 odd
	// num-> 1 Even
	if(num&1)
	return 0;
	else
	return 1;
}

int main()
{
	int a;
	cin>> a;
	int b = isEven(a);
	if(b==1)
	cout<<"Number is Even"<<endl;
	else
	cout<<"Number is Odd"<<endl;
    
	return 0;
}
