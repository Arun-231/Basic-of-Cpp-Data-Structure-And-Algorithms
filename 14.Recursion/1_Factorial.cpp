#include<iostream>
using namespace std;

int fact(int n)
{
	// base case
	if(n == 0){
		return 1;
	}
	// recursive function
	return n * fact(n - 1);
}

int main()
{
	int n;
	cout << "Enter the Number you want factorial: ";
	cin >> n;
	int ans = fact(n);
	cout << "Factorial of " << n << " is " << ans << endl;
	
	return 0;
}
