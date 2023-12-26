#include<iostream>
using namespace std;

int d = 15;

void a(int& i)  // share variable using reference 
{
	cout << d << endl;
}

void b(int i)   // copy variable 
{
	cout << d << endl;
}

int main()
{
	int i = 5;
	
	a(i);
	{
		int x = 2;
		cout << x << endl;
	}
	b(i);
	
	cout << d << endl;
	
	return 0;
}
