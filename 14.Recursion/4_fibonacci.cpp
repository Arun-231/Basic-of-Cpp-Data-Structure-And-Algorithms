#include<iostream>
using namespace std;

int fib(int n)
{
	// base case
	if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
    
}


int main()
{
	int n;
	cout << "Enter the number you want fibonacci series: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << fib(i) << " ";
	}

	
	return 0;
}
