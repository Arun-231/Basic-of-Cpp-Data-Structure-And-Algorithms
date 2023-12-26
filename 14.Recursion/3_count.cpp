#include<iostream>
using namespace std;

void print(int n)
{
	// base case
	if(n == 0)
	   return;
	
	// head recursive
	print(n - 1);
	
	cout << n << endl;
	// tail recursive
//	print(n - 1);
}

int main()
{
	int n;
	cout << "Enter the number you want count: ";
	cin >> n;
	
	print(n);
	
	return 0;
}
